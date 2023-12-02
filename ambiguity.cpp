#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kise ho aap?" << endl;
    }
};

class derive : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet(); // this for solving ambiguity in cpp
    }
};

class A {
    public : 

    void say (){

        cout << "HELLO SARANSH " << endl;
    }

};

class B : public A  {
    public : 
// b's new say() method will override base class 's say() method 
    void say (){

        cout << "HELLO MY BEST FRIEND :  " << endl;
    }

};

int main()
{// ambiguty 1
   // B1.greet();
   // Base1 B1;
   // Base2 B2;
   // B2.greet();
   // derive O1;
   // O1.greet();

// ambiguty 2

A a1;
a1.say();

B b1 ;
b1 . say();


    return 0;
}
