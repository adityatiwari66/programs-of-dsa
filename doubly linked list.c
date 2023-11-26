//creation

#include<stdio.h>
#include<stdlib.h>
struct node {
    int num;
    struct node *preptr;
    struct node *nextptr;
} *stnode, *ennode;

void Dllistcreation(int n);
void display_Dllist();

int main()
{
    int n;
    stnode = NULL;
    ennode = NULL;

printf("\n\n doubly linked list: create and display linked list :\n");
printf("input the number of nodes: ");
scanf("%d",&n);

Dllistcreation(n);
display_Dllist();
return 0;
}
void Dllistcreation(int n)
{
    int i,num;
    struct node *fnNode;
    if (n>=1)
    {
        stnode = (struct node*)malloc(sizeof(struct node));
        if(stnode!=NULL)
        {
            printf("input data for node 1: ");
            scanf("%d",&num);
            stnode->num=num;
            stnode->preptr=NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for (i=2;i<n;i++)
            {
                fnNode=(struct node*)malloc(sizeof(struct node));
                if(fnNode!=NULL)
                {
                    printf("input data for node %d :");
                    scanf("%d",&num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;
                    fnNode->nextptr = NULL;
                    ennode->nextptr = fnNode;
                    ennode = fnNode;
                }
                else
                {
                    printf("memopry cannot be located");
                    break;
                }
            }
        }
        else
        {
            printf("memory cannot be allocated ");
        }
    }
}
void display_Dllist()
{
    struct node *tmp;
    int n=1;
    if(stnode == NULL)
    {
        printf("no data found in the list yet");
    }
    else{
        tmp = stnode;
        printf("\n\n data entered on the list are: \n");
        while(tmp!=NULL)
        {
            printf("node %d:%d \n",n,tmp->num);
            n++;
        tmp = tmp->nextptr;
        }
    }
}