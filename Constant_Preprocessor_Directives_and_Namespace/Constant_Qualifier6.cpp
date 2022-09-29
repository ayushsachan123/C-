#include<iostream>
using namespace std;

class Demo{
    public:
    int x=10;
    int y=20;
    void Display() const{
       // x++; you cannot modify the member of class as function is constant
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Demo d;
    d.Display();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10 20
