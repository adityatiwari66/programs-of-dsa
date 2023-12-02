#include<stdio.h>


// traversal 
   void display(int arr[], int size ) {
    for(int i =0 ; i < size ; i++){
    printf(" %d ", arr[i]);

   }
   printf("\n");
   }

// array for insertion 
void sortedinsrtion(int arr[] , int size , int index){

for (int i = index  ; i < size-1 ; i++ )
{
    arr[i] = arr[i+1] ;
}


}


int main(){
int arr[100] = {7,8 , 12 ,27 ,88 };
int size =5;
display (arr ,size);
int  index =3 ;
 sortedinsrtion(arr , size , index);
size -= 1 ;

display (arr ,size);
return 0;
}
