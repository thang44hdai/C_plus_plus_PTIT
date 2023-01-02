#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
unordered_map<ll, int> a;
void prime()
{
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < 1e3; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                a[j] = 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    prime();
    while (t--)
    {
        int cnt = 0;
        ll l, r;
        cin >> l >> r;
        l = sqrt(l), r = sqrt(r);
        for (ll i = l; i <= r; i++)
            if (!a[i])
                cnt++;
        cout << cnt << "\n";
    }
}