#include<iostream>
using namespace std;

int main(){
    int x=10;
    int const *ptr;
    ptr=&x;
    int y=20;
   ptr = &y;
   //++*ptr; pointer is of constant type
   cout<<*ptr<<" "<<x<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 20 10
