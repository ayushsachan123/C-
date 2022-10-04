#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Constructor of Base"<<endl;
    }
    ~Base(){
        cout<<"Destructor of Base"<<endl;
    }
};

class Derived: public Base{
    public:
    Derived(){
        cout<<"Constructor of Derived"<<endl;
    }
    ~Derived(){
        cout<<"Destructor of Derived"<<endl;
    }
};

//Destructor is from bottom to up

void fun(){
    Derived d;
}

int main(){
   fun(); 
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Constructor of Base
// Constructor of Derived
// Destructor of Derived
// Destructor of Base
