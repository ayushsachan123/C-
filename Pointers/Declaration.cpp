#include <iostream>
using namespace std;
int main()
{
int a=10;
int *p; //Declaration
p=&a;   //Initialization
cout<<a<<endl;
cout<<&a<<endl;
cout<<p<<endl;
cout<<*p<<endl;//Dereferncing

return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
//  10
// 0x7ffd39c55e0c
// 0x7ffd39c55e0c
// 10
