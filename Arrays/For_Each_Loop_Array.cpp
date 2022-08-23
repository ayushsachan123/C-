#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4};
    for (int x : arr1)
    {
        cout << ++x << " ";
    }
     cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int &x : arr1)
    {
        cout << ++x << " ";
    }
    cout << endl;
    //after adding +1 in array by using address its value parmanetly change

    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2 3 4 5 
// 1 2 3 4 
// 2 3 4 5 
// 2 3 4 5 
