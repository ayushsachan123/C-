#include<iostream>
using namespace std;
int * fun(int size){
    int *p = new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
     cout<<p<<endl;
        return p;
}

int main(){
    int *ptr;
    ptr = fun(5);
   for(int i=0;i<5;i++){
     cout<<ptr[i]<<endl;
   }
   cout<<ptr<<endl;
    return 0;
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// 0x55f637029eb0
// 1
// 2
// 3
// 4
// 5
// 0x55f637029eb0
