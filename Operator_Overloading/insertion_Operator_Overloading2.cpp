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
    friend void operator<<(ostream &out, Complex &c);
};
void operator<<(ostream &out,Complex  &c){
    out<<c.real<<"+i"<<c.img<<endl;
    
}
int main(){
    Complex c1(10,5);
    cout<<c1;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10+i5
