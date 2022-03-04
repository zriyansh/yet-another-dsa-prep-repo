#include <iostream>
#include <stdio.h>

using namespace std;

int fib_recursion (int n){
    if (n <=1)
    return n;
    return fib_recursion(n-1) + fib_recursion(n-2);
}

int  fib_DP(int n){
    int arr [n+2];
    arr [0] = 0;
    arr [1] = 1;
    for(int i = 2; i <=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}

void fib_iterative(int n){
    int first = 0, second = 1, sum = 0;
    if (n == 0 || n == 1)
        cout << "0 ";
    else 
        cout << "0 1 ";

    for (int i = 2; i <= n; ++i)
    {
        sum = first + second;
        first = second;
        second = sum;
        cout << sum << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fib_DP(n);
}
