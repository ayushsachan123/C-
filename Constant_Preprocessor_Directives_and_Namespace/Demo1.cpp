#include<iostream>
using namespace std;
class Base{
    public:
void fun1(){
    cout<<"fun1 of Base"<<endl;
}
};
class Derived : public Base{
public:
void fun2(){
    cout<<"fun2 of Derived"<<endl;
}
};
int main(){
 Derived d;
 Base *p; 
 p=&d; 
p->fun1();
//p->fun2(); Base class has only fun 1 so we cannot call the
            //function of derived classes

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// fun1 of Base
