#include<iostream>
using namespace std;
int g=5;
void fun(){
    int g=10;
    g++;
}
int main(){
cout<<g<<endl;
fun();
cout<<g<<endl; 
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 5
// 5
