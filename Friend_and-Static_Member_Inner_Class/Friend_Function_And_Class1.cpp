#include<iostream>
using namespace std;
class Your;
class My{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend Your;
};
class Your{
    void fun(){
        My m;
        m.a=10;
        m.b=5;
        m.c=15;
     }
};
int main(){
    
}
