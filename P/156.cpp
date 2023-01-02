#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll sol(ll n, ll p)
{
    ll ans = 0;
    for (ll x = 1; x < p; x++)
    {
        if ((x * x) % p == 1)
        {
            ll tmp = x + p * (n / p);
            if (tmp > n)
                tmp -= p;
            ans += ((tmp - x) / p + 1);
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll b, p;
        cin >> b >> p;
        cout << sol(b, p) << "\n";
    }
    return 0;
}