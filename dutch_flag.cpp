#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    char arr[n][n];
    char diagonal = arr[0][0];
    char ndiagonal = arr[0][1];
    int d1=0, d = 2*n-1;
    int nd1=0, nd = n*n - 2*n + 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == diagonal)
                d1++;
            else if(arr[i][j] == ndiagonal)
                nd1++;
        }
    }
    if(nd1 == nd && d == d1){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    


}


// int main(){
//     int arr[] = {1,0,2,0,1,1,2,0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int low=0, mid=0, high=n-1;
//     while(mid < high){
//         if(arr[mid] == 0){
//             swap(arr[low], arr[mid]);
//             mid++, low++;
//         }
//         if(arr[mid] == 1){
//             mid++;
//         }
//         if(arr[mid]==2){
//             swap(arr[mid], arr[high]);
//             mid++;
//             high--;
//         }
//     }
//     for(int i=0; i < n; i++){
//         cout<<arr[i] << " ";
//     }
// }