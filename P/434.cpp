#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        vector<ll> vt;
        for (auto &i : a)
            cin >> i;
        vt.push_back(a[0] * a[1]);
        for (int i = 1; i < n - 1; i++)
            vt.push_back(a[i - 1] * a[i + 1]);
        vt.push_back(a[n - 1] * a[n - 2]);
        for (auto i : vt)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}
