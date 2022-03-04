#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    long long i, j, k, l, S, count = 0;
    cin >> k >> S;
    for (i = 0; i < k; i++)
        for (j = 0; j < k; j++)
        {
            int l = S - i - j;
            if(l >=0 && l <=k)
            count ++;
        }
    cout << count;
}