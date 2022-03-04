#include <bits/stdc++.h>
using namespace std;

int subarrayNormal()
{
    int arr[] = {1,2,3,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 12, rsum;

    for (int i = 0; i < size; i++)
    {
        rsum = arr[i];
        for (int j = i + 1; j <= size; j++)
        {
            if (rsum == sum)
            {
                cout << "sum possible b/w" << i << " and " << j - 1 << endl;
                return 1;
            }
            if (rsum > sum || j == size)
            {
                break;
            }
            rsum = rsum + arr[j];
        }
    }
    cout << "index not possible";
    return -1;
}

// take a array and store elements to it till sum < required su, if its more, pop the first element.

int subarray_optimised()
{
    int arr[] = {1,2,3,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s= 2;
    int rsum = arr[0], start=0;
    
    for(int i = 1; i <= n; i ++){
        while(rsum> s){
            rsum = rsum - arr[start];
            start++;
        }
        if(rsum == s){
            cout<<"found at " << start << i-1 <<endl;
            return 1;
        }
        rsum = rsum + arr[i];
    }
return -1;
}

int main()
{
    int index = subarray_optimised();
}
