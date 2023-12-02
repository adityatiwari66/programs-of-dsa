#include<iostream>
using namespace std;
/*
syntex for initilization list in constracter : 
constracter (aregument - list ) : initilization - section 
{
    assigment + other code ;
}

*/

class test {
    int a ; 
    int b; 

    public: 

    test (int i ,int j ) : a(i ) , b(j){
        cout << "constractor executed " << endl;
        cout<< " value of a is " << a << endl;
        cout << "value of b is " << b << endl ;
    }
};
int main(){

    test t(4, 6 );
        
    return 0;
}

