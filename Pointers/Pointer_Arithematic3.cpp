#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int *p,*q;
    p=arr;
    q=&arr[4];
    cout<<q-p; //it means there are four elements between them
    cout<<p-q; //it means 2nd pointer is far away
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 4-4
