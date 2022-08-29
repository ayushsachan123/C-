#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Output Of Swap Function" << endl;
    cout << *a << " " << *b << endl;
}
int main()
{
    cout << "Enter the Number you want to swap:- " << endl;
    int x, y;
    cin >> x >> y;
    swap(&x, &y);
    cout << "Output of main Function" << endl;
    cout << x << " " << y << endl;
    cout << "there is change in value" << endl;
    cout << "In pass by Address" << endl;
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
// 3 2
// there is change in value
// In pass by Address
