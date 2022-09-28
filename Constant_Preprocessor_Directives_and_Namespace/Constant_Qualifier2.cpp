#include<iostream>
using namespace std;

int main(){
     int x=10;
     const int *ptr; //int const *ptr;
    ptr =&x;
    //++*ptr; as it constant pointer so you cannot modify the 
    //value where it is pointing
    cout<<*ptr<<" "<<x<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10 10
