#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll c;
ll mulMod(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll tmp = mulMod(a, b / 2);
    tmp = (tmp + tmp) % c;
    if (b & 1)
        tmp = (tmp + a) % c;
    return tmp % c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b >> c;
        cout << mulMod(a, b) << "\n";
    }

    return 0;
}
