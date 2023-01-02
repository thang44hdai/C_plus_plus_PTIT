#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n, m, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        vector<ll> a(n), b(m), c(k);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        for (auto &i : c)
            cin >> i;
        vector<ll> d, e;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(d));
        set_intersection(d.begin(), d.end(), c.begin(), c.end(), back_inserter(e));
        if (e.size())
            for (auto i : e)
                cout << i << " ";
        else
            cout << -1;

        cout << "\n";
    }

    return 0;
}
