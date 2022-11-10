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
//shared pointer
shared_ptr<Rectangle> ptr(new Rectangle(10,5));
cout<<ptr->area()<<endl;

shared_ptr<Rectangle> ptr2;
ptr2=ptr;
cout<<"ptr2 "<<ptr2->area()<<endl;
cout<<"ptr "<<ptr->area()<<endl;
cout<<"Number of pointer pointing on object "<<ptr.use_count()<<endl;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// ptr2 50
// ptr 50
// Number of pointer pointing on object 2
