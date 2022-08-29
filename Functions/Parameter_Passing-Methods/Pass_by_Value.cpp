#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Output Of Swap Function"<<endl;
    cout << a << " " << b<<endl;
}
int main()
{
    cout<<"Enter the Number you want to swap:- "<<endl;
    int x, y;
    cin >> x>>y;
    swap(x, y);
    cout<<"Output of main Function"<<endl;
    cout << x << " " << y<<endl;
    cout<<"It means actually there is no interchange of value"<<endl;
    cout<<"In pass by Value"<<endl;
    return 0;
}

//-------------------------------------------------------------------------------------------------------------
// Input--
// Enter the Number you want to swap:- 
// 2 3
// Output--
// Output Of Swap Function
// 3 2
// Output of main Function
// 2 3
// It means actually there is no interchange of value
// In pass by Value
