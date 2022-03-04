#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

void subarr_twoLoops()
{
    int arr[] = {1, -1, 2, 3, -1, -2};
    int i, j, k, n, sum = 0, best = 0;
    n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = i; j < n; j++)
        {
            sum += arr[j];
            best = max(best, sum);
        }
    }
    cout << best;
}

void subarr_threeloops()
{
    int arr[] = {1, -1, 2, 3, -1, -2};
    int best = 0, a, b, k, n;
    n = sizeof(arr) / sizeof(arr[0]);
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum = 0;
            for (int k = a; k <= b; k++)
            {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}

void subarr_bestOptimised()
{
    int arr[] = {-1, 2, -1, 3, 2, -1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = max(arr[k], sum + arr[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
int main()
{
//     subarr_threeloops();
//     subarr_twoLoops();
subarr_bestOptimised();
}
