#include <iostream>
using namespace std;
int main()
{
    // Declaring the elments in array

    int arr1[2][3] = {{2, 5, 9}, {6, 9, 15}};
    // OR
    int arr2[2][3] = {2, 5, 9, 6, 9, 15};
    // OR
    int arr3[2][3] = {2, 5};

    // Accessing all the element of array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2 5 9 
// 6 9 15 
