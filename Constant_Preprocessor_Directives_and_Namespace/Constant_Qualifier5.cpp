#include<iostream>
using namespace std;
int main(){
     int x =10;
    const int * const ptr=&x;
   //  ++*ptr;  you cannot change the value
    int y=20;
  //  ptr=&y; //as it constant pointer so it cannot move to other variable
    cout<<*ptr<<" "<<x<<endl;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10 10
