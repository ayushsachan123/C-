#include<iostream>
using namespace std;
int add(int x, int y, int z=0){
    return x+y+z;
}

int main(){
   int a= add(2,5);
   cout<<a<<endl;
    int b = add(2,5,8);
    cout<<b<<endl;
    int c = add(2,5,0);
    cout<<c<<endl;
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 7
// 15
// 7
