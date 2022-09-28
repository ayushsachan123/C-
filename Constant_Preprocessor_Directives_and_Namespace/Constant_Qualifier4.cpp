#include<iostream>
using namespace std;
int main(){
     int x =10;
    int * const ptr=&x;
    ++*ptr; //you can change the value of x
    int y=20;
  //  ptr=&y; //as it constant pointer so it cannot move to other variable
    cout<<*ptr<<" "<<x<<endl;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 11 11
