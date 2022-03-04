#include <bits/stdc++.h>
using namespace std;

int N, C;
long long A[100000];

bool cow_Placed(int dist)
{
    int last_pos = A[0], cow_placed_in_stall = 1;
    for (int i = 1; i < N; i++)
    {
        if ((A[i] - last_pos) >= dist)
        {
            cow_placed_in_stall++;
            last_pos = A[i];
            if (C == cow_placed_in_stall)
                return true;
        }
    }
    return false;
}

void solve()
{
    int placedAt;
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);

    long long low = 0, high = A[N - 1] - A[0], mid, pos = 0;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (cow_Placed(mid))
        {
            placedAt = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout << placedAt << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
}