#include <iostream>
using namespace std;

int main()
{
    /*
        1. Basics
    */
    // print the entire character
    // char name[100] = "Ramesh";
    // int i=0;

    // while(name[i] != '\0') {
    //     cout << name[i] << " ";
    //     ++i;
    // }

    /*
        2. Check palindrome
    */
    // int n, flag = true;
    // cout << "Enter char array length\n";
    // cin >> n;

    // char name[n];

    // cout << "Enter a text\n";
    // cin >> name;

    // for(int i=0; i<=n / 2; ++i) {
    //     if(name[i] != name[n-i-1]) {
    //         flag = false;
    //         break;
    //     }
    // }

    // flag ? cout << "Plaindrome" : cout << "Not Palindrome";

    /*
        3. Largest word in a sentence;
        eg: this is the largest word.
        output: largest
    */

    string name;
    int count = 0, maxCount = INT_MIN, end = 0;

    cout << "Enter you string\n";
    getline(cin, name);

    for (int i = 0; i <= name.length(); ++i)
    {
        if (name[i] == '\0' || name[i] == ' ')
        {
            // maxCount = max(maxCount, count);
            if (maxCount < count)
            {
                maxCount = count;
                end = i - 1;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }

    int start = end - maxCount + 1;

    for (int i = start; i < start + maxCount; ++i)
    {
        cout << name[i];
    }

    return 0;
}