#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int *p;
    p=&arr[0];
   cout<<*p<<endl;

   p++;
   cout<<*p<<endl;
  
   p--;
   cout<<*p<<endl;
   
   p=p+2;
   cout<<*p<<endl;
   cout<<p+2<<endl;

   p=p-2;
   cout<<*p<<endl;
   cout<<p+2<<endl;
   
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2
// 4
// 2
// 6
// 0x7ffe7fd8a060
// 2
// 0x7ffe7fd8a058
