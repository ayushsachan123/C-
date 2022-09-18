#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &y = x;
    cout<<x<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<&x<<" "<<&y;  //Both having same address


    return 0;         
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 10
// 12
// 0x7ffe966bad5c 0x7ffe966bad5c
