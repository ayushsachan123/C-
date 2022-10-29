#include<iostream>
using namespace std;
class Parent{
    private:int a;
    protected: int b;
    public:int c;
    void funparent(){
        a=10;
        b=5;
        c=15;
    }
};
class Child:public Parent{
    public:
    void funchild(){
        //a=10;
        b=5;
        c=15;

}
};
class GrandChild:public Child{
    public:
    void funGrandchild(){
    //a=10;
    b=5;
    c=20;
    }
};

int main(){
 Child c; 
 //c.a=10; private & protected is not accessib
    le in object
 //c.b=5;
 c.c=25;
}
