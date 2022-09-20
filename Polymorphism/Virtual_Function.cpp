#include<iostream>
using namespace std;

class Base{
    public:
     virtual void fun(){
        cout<<"fun of Base"<<endl;
    }
};
class Derived : public Base{
    public:
    void fun(){
        cout<<"fun of derived"<<endl;   
    }
};
int main(){
    Derived d;
    Base *p=&d;
    p->fun();
    
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// fun of derived
