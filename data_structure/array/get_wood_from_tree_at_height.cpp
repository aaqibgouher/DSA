/*  given: array, and no of woods required.
    problem: given an array containing the trees with particular heights. and you just have to find that at what height if we started cutting the trees to get given required woods.
    example: arr = {1, 2, 3, 4, 5}, wood required = 5, so 
                    1
                1   1
            1   1   1
        1   1   1   1
    1   1   1   1   1
    0   1   2   3   4 height, so if we will start cutting at height = 0, then we will get 15 units of wood, same as height = 1, then wood = 10, height = 2, then wood = 6, height = 3, then wood = 3, height = 4, then wood = 1, height = 5, then wood = 0; hence our requirement is 5 unit of woods. hence we have to till h = 2, so that we will get wood = 6, and hence it is required only 5, but we will get just 1 extra, which is the least among all these. and main required condition was that if we are cutting the trees at particular height then we have to cut the rest of the trees keeping that height only ...
*/

#include<iostream>
#include<string>
#include <cmath>
using namespace std;
 
int get_max(int arr[], int n) {
    int i, max = -9999;

    for(i=0;i<n;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int find_sum(int arr[], int height, int max, int size) {
    int i = 0, wood = 0, sum = 0;

    for(i=0;i<size;i++) {
        wood = arr[i] - height <= 0 ? 0 : arr[i] - height;
        sum += wood;
    }

    return sum;
}

int main()
{
    int arr[] = {3, 4, 5, 4, 3};
    int height = 0, j = 0, max = 0, size = 0, total_wood = 0, min = 99999, index = 0;
    size = sizeof(arr)/sizeof(arr[0]);
    int wood = 4; /*given*/

    max = get_max(arr, size);

    int diff;

    for(height=0;height<=max;height++) {
        total_wood = find_sum(arr, height, max, size);
        diff = abs(total_wood - wood);
        if(diff < min) {
            min = diff;
            index = height;
        }
    }

    cout<<"if we will cut at height of "<<index<<"  we will get the required woods..";

    return 0;
}