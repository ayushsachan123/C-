#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b);
    void setLength(int l);
    void setBreadth(int b);
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area();
    int perimeter();
    bool issquare();
   
};
Rectangle::Rectangle(int l=1, int b=1)
{
    length = l;
    breadth = b;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::issquare()
{
    if (length == breadth)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h=1)
    {
        height = h;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
      
};

int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
 cout<<c.volume()<<endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 350
