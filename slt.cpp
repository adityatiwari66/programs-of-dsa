#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> lst1 ;// list of 0 length
     list <int> lst2(7) ;//  empty list of size 7 

    lst1.push_back(5);
    lst1.push_back(3);
lst1.push_back(6);
lst1.push_back(7);
lst1.push_back(8);

list<int > :: iterator iter ; 
iter = lst1.begin(); 
cout << *iter << "  " ; 
iter++ ;new
cout << *iter << "  " ; 
iter++ ;
cout << *iter << "  " ; 
iter++ ;
cout << *iter << "  " ; 
iter++ ;
cout << *iter << "  " ; 
iter++ ;
    return 0;
}