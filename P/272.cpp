#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n;
ll m = 1e9 + 7;
// a= a/2 +a/2;
ll mulMod(ll a, ll b)
{
    if (a == 0)
        return 0;
    ll res = 0;
    while (a)
    {
        if (a % 2)
            res = (res + b) % m;
        a /= 2;
        b = (b + b) % m;
    }
    return res;
}
// a^b= a^(b/2) * a^(b/2)
ll Pow(ll a, ll b)
{
    if (b == 1)
        return a;
    if (b == 0)
        return 1;
    ll c = Pow(a, b / 2) % m;
    c = mulMod(c, c) % m;
    if (b % 2)
        return mulMod(c, a);
    return c;
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
        cin >> n;
        ll a[n];
        ll tich = 1;
        for (auto &i : a)
        {
            cin >> i;
            tich = (tich * i) % m;
        }
        ll uc = a[0];
        for (int i = 1; i < n; i++)
            uc = __gcd(uc, a[i]);
        cout << Pow(tich, uc) << "\n";
    }
    return 0;
}