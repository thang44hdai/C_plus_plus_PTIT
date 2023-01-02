#include <bits/stdc++.h>

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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        int u = 0, d = n - 1, l = 0, r = m - 1;
        int ans[n * m];
        int idx = 0;
        while (idx < n * m)
        {
            for (int i = l; i <= r; i++)
            {
                ans[idx++] = a[u][i];
            }
            for (int i = u + 1; i <= d; i++)
            {
                ans[idx++] = a[i][r];
            }
            for (int i = r - 1; i >= l; i--)
            {
                ans[idx++] = a[d][i];
            }
            for (int i = d - 1; i > u; i--)
            {
                ans[idx++] = a[i][l];
            }
            l++, r--, u++, d--;
        }
        for (int i = 0; i < n * m; i++)
            cout << ans[i] << " ";
        //     1  2  3 4
        //    5   6  7 8
        //    9  10 11 12
        cout << "\n";
    }
    return 0;
}