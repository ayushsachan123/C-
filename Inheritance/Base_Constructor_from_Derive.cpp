#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Non-param Base"<<endl;
    }
    Base(int x){
        cout<<"Param of Base"<<" "<<x<<endl;
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
  Derived(int x,int y):Base(x){
    cout<<"Param of Derived"<<" "<<y<<endl;
 }
};
int main(){
    Derived d(5,10);
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// Param of Base 5
// Param of Derived 10
