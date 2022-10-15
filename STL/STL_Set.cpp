#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = {2, 4, 6, 8, 10};

    // Inserting the value
    v.insert(20);
    v.insert(30);    

    // using Iterator
    set<int>::iterator itr;

    cout << "This is Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    // Using for each loop
    cout << "This is using for each loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// This is Using iterator
// 2
// 4
// 6
// 8
// 10
// 20
// 30
// This is using for each loop
// 2
// 4
// 6
// 8
// 10
// 20
// 30
