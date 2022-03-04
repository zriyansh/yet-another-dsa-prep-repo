#include <bits/stdc++.h>

using namespace std;

int gcd_recursive(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd_recursive(a - b, b);
    return gcd_recursive(a, b - a);
}

int gcd(int a, int b)
{
    int max, max_i;
    max = a > b ? a : b;
    for (int i = 1; i <= max; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (max_i < i)
            {
                max_i = i;
            }
        }
    }
    return max_i;
}
int main()
{
    int a, b, max, max_i = 1;
    cin >> a >> b;
    cout << gcd_recursive(a, b);
}
