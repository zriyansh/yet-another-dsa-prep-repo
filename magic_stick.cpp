#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if((x==2 || x ==3) && y <4 ) cout <<"YES\n";
        else if(x > 3) cout <<"YES\n";
        else if(x==1 && y ==1 ) cout <<"YES\n";
        else cout<<"NO\n";
    }
}
