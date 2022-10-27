#include<iostream>
using namespace std;
int main(){
    int arr1[] = {2,4,6};
    for(int x:arr1)
    {
    cout<<x<<endl;
    }
    char arr2[] ={'A',66,'C',68};
    for(auto y:arr2)
    cout<<y<<endl;
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2
// 4
// 6
// A
// B
// C
// D
