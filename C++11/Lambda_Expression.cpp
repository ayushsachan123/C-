#include<iostream>
using namespace std;

int main(){
    //Only Printing without passing an argument
 [](){cout<<"Hello"<<endl;}();

 //Passing Argument
 [](int x,int y){cout<<"Sum is"<<x+y<<endl;}(10,30);

 int a=[](int x,int y){return x+y;}(10,30);
 cout<<a<<endl;


    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Hello
// Sum is40
// 40
