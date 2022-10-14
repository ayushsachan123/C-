#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v = {2, 4, 6, 8, 10};

    // Inserting the value
    v.push_back(20);
    v.push_back(30);

    // Deleting the value
    v.pop_back();

    // using Iterator
    list<int>::iterator itr;

    cout << "This is Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    // Incrementin the value

    cout << "Incrementing the value Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << ++*itr << endl;
    }

    // Using for each loop
    cout << "This is using for each loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
}


// //--------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// This is Using iterator
// 2
// 4
// 6
// 8
// 10
// 20
// Incrementing the value Using iterator
// 3
// 5
// 7
// 9
// 11
// 21
// This is using for each loop
// 3
// 5
// 7
// 9
// 11
// 21
