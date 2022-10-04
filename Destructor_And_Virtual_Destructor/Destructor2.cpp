#include<iostream>
using namespace std;

class Demo{
    int *p;
    public:
    Demo(){
        p=new int[10];
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo(){
        delete []p;
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
