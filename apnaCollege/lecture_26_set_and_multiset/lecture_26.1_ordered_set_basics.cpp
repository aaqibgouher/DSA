#include <iostream>
#include <set>
using namespace std;

int main()
{
    /*
        1. container unique element
        2. implemented using balanced bst
        3. elements are in sorted order
        4. random access is not possible, we have to iterate to that element.
        5. present in <set> header file
    */

    // 1. insertion and print
    set<int> mySet; // it will print in ascending order, to print desc, we have to define it set<int, greater<int>> mySet;

    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);

    // print set element
    for (auto i : mySet)
    {
        cout << i << " ";
    }

    cout << endl;

    // print using begin and end
    for (auto i = mySet.rbegin(); i != mySet.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // delete
    mySet.erase(1);
    for (auto i = mySet.rbegin(); i != mySet.rend(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}