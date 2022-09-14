#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
};
int main(){
    Complex c(5,3);
    c.display();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5+i3
