#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:

//Declare Own constructors
//Non Parametrized Constructor
Rectangle()
{
    length=1;
    breadth=1;
}
//Parametrized constructor
Rectangle(int l,int b){
    setLength(l);
    setBreadth(b);

}
//Copy constructor
Rectangle(Rectangle &r){
    length= r.length;
    breadth= r.breadth;
}
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }

    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;
    //Area and perimeter of second object
      cout << "Area is " << r2.area() << endl;
    cout << "Perimeter is " << r2.perimeter() << endl;
}

//-----------------------------------------------------------------------------------------------------------
// Output--
// Area is 50
// Perimeter is 30
// Area is 50
// Perimeter is 30
