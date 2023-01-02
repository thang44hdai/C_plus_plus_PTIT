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
        vector<int> vt;
        while (n--)
        {
            int x;
            cin >> x;
            vt.push_back(x);
        }
        int k, x;
        cin >> k >> x;
        sort(vt.begin(), vt.end());
        int idx = lower_bound(vt.begin(), vt.end(), x) - vt.begin();
        int l, r;
        if (vt[idx] == x)
            l = idx - 1, r = idx + 1;
        else
            l = idx - 1, r = idx;
        for (int i = k / 2 - 1; i >= 0; i--)
            cout << vt[l - i] << ' ';
        for (int i = 0; i < k / 2; i++)
            cout << vt[r + i] << ' ';
        cout << "\n";
    }

    return 0;
}
