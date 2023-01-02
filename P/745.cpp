#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll m = 1e9 + 7;
ll fi[1005] = {};
ll sol(ll n)
{
    if (n == 0)
        return n;
    if (fi[n])
        return fi[n];
    return fi[n] = (sol(n-1) + sol(n-2)) % m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fi[1]=1;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << sol(n) << "\n";
    }
    return 0;
}