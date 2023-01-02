#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> vt;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vt.push_back({abs(a[i] - k), i});
        }
        sort(vt.begin(), vt.end());
        for (auto i : vt)
            cout << a[i.second] << " ";
        cout << "\n";
    }

    return 0;
}
