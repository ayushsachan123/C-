#include<iostream>
using namespace std;
class Base
{
    public:
    int a;
    void display(){
        cout<<"Display of Base"<<" "<<a<<endl;
    }
};
class Derived : public Base{
    public:
    void show(){
        cout<<"Show of derived"<<endl;
    }
};
int main(){
    
    /*Base b;
    b.display(); */

    Derived d;
    d.a=100;
    d.display();
    d.show();
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// Display of Base 100
// Show of derived
