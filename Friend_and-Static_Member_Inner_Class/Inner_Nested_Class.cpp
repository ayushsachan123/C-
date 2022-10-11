#include<iostream>
using namespace std;
class Outer{
    public:
   void fun(){
 i.display();
    }
class Inner{
    public:
    void display(){
        cout<<"Display of Inner"<<endl;
    }
};
Inner i;
};

int main(){
    Outer::Inner i;
    i.display();
    Outer o;
    o.fun();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Display of Inner
// Display of Inner
