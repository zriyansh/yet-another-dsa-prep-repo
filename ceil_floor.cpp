#include <bits/stdc++.h>
using namespace std;

int findCeil(int arr[], int size, int n)
{
    int ceil=-1,low=0, mid, high=size-1;
    if (n <= arr[0])
    {
        return 0;
    }
    if(n>=arr[size-1]){
        cout<<"ceil does not exist";
    }
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (n == arr[mid])
            return mid;

        if (n < arr[mid])
        {
            ceil = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ceil;
}

int findFloor(int arr[], int size, int n)
{
    int floor=-1,low=0, mid, high=size-1;
    if (n <= arr[0])
    {
        cout<<"doesnt exist";
    }
    if(n>=arr[size-1]){
        return size-1;
    }
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (n == arr[mid])
            return mid;

        if (n < arr[mid])
        {
            high = mid - 1;
        }
        else
        {   floor = mid;
            low = mid + 1;
        }
    }
    return floor;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 9};
    int i, n;
    int size = sizeof(arr) / sizeof(arr[0]);
    cin >> n;
    // int index = findCeil(arr, size, n);
    int index = findFloor(arr, size, n);
    cout << arr[index];

    // for (i = 0; i < 5; ++i)
    // {
    //     if (n > arr[i] && n < arr[i + 1])
    //     {
    //         cout << arr[i] << " " << arr[i + 1];
    //     }
    //     if (n == arr[i])
    //     {
    //         cout << n << " " << n;
    //     }
    //     if (n < arr[0])
    //     {
    //         cout << arr[0];
    //         break;
    //     }
    //     if (n > arr[size - 1])
    //     {
    //         cout << arr[size - 1];
    //         break;
    //     }
    // }
    return 0;
}
