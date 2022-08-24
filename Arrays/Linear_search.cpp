#include <iostream>
using namespace std;
int main()
{
    int n, i, a;
    int arr[n];
    cout << "Enter the size of array";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. which you want to search:-";
    cin >> a;
    for (i = 0; i < n; i++)
    {
        if (a == arr[i])
        {
            cout << i;
            return 0;
        }
    }
    cout << "Not found";
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
//Input--
// Enter the size of array5
// 12 3 4 5 6
// Enter the no. which you want to search:-5
// Output--
// 3
