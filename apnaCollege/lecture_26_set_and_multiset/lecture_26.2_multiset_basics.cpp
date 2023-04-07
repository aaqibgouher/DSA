#include <iostream>
#include <set>
using namespace std;

int main()
{
    /*
        1. can contain duplicates
        2. implemented using balanced bst
        3. elements are in sorted order
        4. random access is not possible
        5. present in <set> header file
    */

    // 1. insert element
    multiset<int> mSet;
    mSet.insert(1);
    mSet.insert(1);
    mSet.insert(2);

    for (auto i : mSet)
    {
        cout << i << " ";
    }

    cout << endl;

    // 2. erase
    mSet.erase(1);

    for (auto i : mSet)
    {
        cout << i << " ";
    }

    cout << endl;

    // 3. delete first occured only if repeated
    mSet.insert(1);
    mSet.insert(2);

    mSet.erase(mSet.find(2));

    for (auto i : mSet)
    {
        cout << i << " ";
    }

    return 0;
}