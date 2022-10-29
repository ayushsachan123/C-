#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Non-param Base"<<endl;
    }
    Base(int x){
        cout<<"Param of Base"<<x<<endl;
    }
};
class Derived:public Base{
    public:
 Derived(){
    cout<<"Non-Param Derived"<<endl;
 }
 Derived(int y){
    cout<<"Param of Derived"<<" "<<y<<endl;
 }
};
int main(){
    Derived d(10);
}

//-----------------------------------------------------------------------------------------------------------
// Output--
// Non-param Base
// Param of Derived 10
