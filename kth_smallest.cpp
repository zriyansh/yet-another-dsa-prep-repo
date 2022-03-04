#include <bits/stdc++.h>
using namespace std;

void kthSmallest(int arr[], int l, int r, int k)
{
    int size = r + 1;
    sort(arr, arr + r + 1);
    for (int i = 0; i < r - 1; i++)
    {
        // cout<<arr[i+1];
        cout << INT_MIN;
    }
}

// int usingHeap(){

// }

int main()
{
    int arr[] = {7, 10, 4, 20, 15};
    int k = 4;
    int size = 5;
    kthSmallest(arr, 0, size - 1, k);
}
