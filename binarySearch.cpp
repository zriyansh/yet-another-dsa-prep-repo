#include <bits/stdc++.h>
using namespace std;

int main (){
    int ele =14;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,12,13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n-1, mid;
    while(low <= high){
        mid = (low + high)/2;
        if(ele == arr[mid])
        cout << "element found";
        
        if(ele < arr[mid]){
            high= mid-1;
        } else {
            low = mid+1;
        }
    }
}