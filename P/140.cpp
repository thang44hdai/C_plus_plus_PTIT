#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long
ll sol(ll n)
{
    if (n > 1e12)
        return 0;
    ll sum = 1;
    ll sqr = sqrt(n);
    for (ll i = 2; i <= sqr; i++)
        if (n % i == 0)
            if (i * i == n)
                sum += i;
            else
                sum += i + n / i;
    return sum;
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
        ll n;
        cin >> n;
        cout << (sol(n) == n) << "\n";
    }
    return 0;
}