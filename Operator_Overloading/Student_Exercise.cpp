#include<iostream>
using namespace std;
class Rational {
private:
 int p;
 int q;

 public:
Rational(int p=1,int q=1){
this->p=p;
this->q=q;
}
Rational operator+(Rational r){
    Rational t;
    t.p=this->p*r.q + this->q*r.p;
    t.q=this->q*r.q;
    return t;
}
friend ostream & operator<<(ostream &out , Rational &r);
};
ostream & operator<<(ostream &out , Rational &r){
    out<<r.p<<"/"<<r.q;
    return out;
}
int main(){
    Rational r1(10,5),r2(5,3),r3;
    r3=r1+r2;
   cout<<"Sum of " <<r1<<" and "<<r2<<" is "<<r3<<endl;
    
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Sum of 10/5 and 5/3 is 55/15
