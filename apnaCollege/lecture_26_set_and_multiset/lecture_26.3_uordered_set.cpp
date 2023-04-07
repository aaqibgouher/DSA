#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    /*
        1. container unique elements
        2. implemented using hashing
        3. elements are not in sorted order
        4. random access is not possible
        5. present in <unordered_set> header file

        adv:
        1. insertion: O(1) in avg case, O(N) worst case
        2. insertion: O(1) in avg case, O(N) worst case
        3. lower / upper bound: NA
    */

    unordered_set<int> uSet;

    // insert
    uSet.insert(1);
    uSet.insert(2);
    uSet.insert(3);
    uSet.insert(4);
    uSet.insert(5);

    // print
    for (auto i : uSet)
    {
        cout << i << " ";
    }

    cout << endl;

    // erase
    uSet.erase(5);

    for (auto i : uSet)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}