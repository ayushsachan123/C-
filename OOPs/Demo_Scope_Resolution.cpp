#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    // Mutators
    void setlength(int l);
    void setbreadth(int b);
    // Accesor
    int getlength();
    int getbreadth();
    // Facilitators
    int area();
    int perimeter();
    // Enquiry
    bool issquare();
    // Destructors
    ~Rectangle();
};

int main()
{
    Rectangle r1(10,10);
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter()<<endl;
    if(r1.issquare()){
        cout<<"YES"<<endl;
    }
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    setlength(l);
    setbreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setlength(int l)
{
    length = l;
}
void Rectangle::setbreadth(int b)
{
    breadth = b;
}
int Rectangle::getlength(){
    return length;
}
int Rectangle::getbreadth(){
    return breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::issquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed"<<endl;
}

//-----------------------------------------------------------------------------------------------------------
// Output--
// Area is 100
// Perimeter is 40
// YES
// Rectangle Destroyed
