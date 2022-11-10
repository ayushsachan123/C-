#include<iostream>
using namespace std;

int main(){
    //Accessing local variables
     int a=10;
     [a](){cout<<a<<endl;}();
    //or
   cout<<endl;

    int b=20;
    auto f=[b](){cout<<b<<endl;};
    f();
    a++;
    f();
    cout<<endl;

    //for modification we have to give refrence as a
    int c=30;
    auto g=[&c](){cout<<c++<<endl;};
    g();
    c++;
    g();
    cout<<endl;

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10

// 20
// 20

// 30
// 32
