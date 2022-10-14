#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> v = {2, 4, 6, 8, 10};

    // Inserting the value
    v.push_front(20);
    v.push_front(30);

    // Deleting the value
    v.pop_front();

    // using Iterator
    forward_list<int>::iterator itr;

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

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// This is Using iterator
// 20
// 2
// 4
// 6
// 8
// 10
// Incrementing the value Using iterator
// 21
// 3
// 5
// 7
// 9
// 11
// This is using for each loop
// 21
// 3
// 5
// 7
// 9
// 11
