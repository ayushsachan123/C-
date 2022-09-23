#include<iostream>
using namespace std;
class Rectangle{
    public:
void area(){
    cout<<"Area of Rectangle"<<endl;
}
};
class Cuboid : public Rectangle{
    public:
void volume(){
    cout<<"Cuboid Volume"<<endl;
}
};
int main(){
    Cuboid c;
    Rectangle *p;
    p=&c;
    p->area();
   /* p->volume(); */
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Area of Rectangle
