#include<iostream>
using namespace std;

void fun(const int &a , int &b){
    cout<<a<<" "<<b<<endl;
    //a++; constant refernce so you cannot modify
}
int main(){
    int x=10;
    int y=20;
    fun(x,y);
    cout<<"Main: "<<x<<" "<<y<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10 20
// Main: 10 20
