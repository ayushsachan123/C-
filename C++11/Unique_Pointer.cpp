#include<iostream>
#include<memory>
using namespace std;


class Rectangle {
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length* breadth;
    }
};

int main(){
//unique pointer
unique_ptr<Rectangle> ptr(new Rectangle(10,5));
cout<<ptr->area()<<endl;

//you cannot initialize another pointer to this pointer
//unique_ptr<Rectangle> ptr2=ptr;

unique_ptr<Rectangle> ptr2;
ptr2=move(ptr);
cout<<ptr2->area()<<endl;

//comes error while print ptr->ptr because at that time it is not
//pointing to any object
//cout<<ptr->area()<<endl;


    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 50
// 50
