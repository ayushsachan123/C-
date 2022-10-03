#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo(){
        cout<<"Destructor of Demo"<<endl;
    }
};

void fun(){
    Demo *p=new Demo();
    delete p;  //you shold write delete because it's memory is not on heap
}

int main(){
fun();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Constructor of Demo
// Destructor of Demo
