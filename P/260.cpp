#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> vt;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            vt.push_back(x);
        }
    sort(vt.begin(), vt.end());
    // for(auto i: vt) cout<<i<<" ";
    int a[n][n];
    int u = 0, d = n - 1, l = 0, r = n - 1;
    int Max = 0;
    while (Max < n * n)
    {
        for (int i = l; i <= r; i++)
            a[u][i] = vt[Max++];
        for (int i = u + 1; i <= d; i++)
            a[i][r] = vt[Max++];
        for (int i = r - 1; i >= l; i--)
            a[d][i] = vt[Max++];
        for (int i = d - 1; i > u; i--)
            a[i][l] = vt[Max++];
        u++, d--, l++, r--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}