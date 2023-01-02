#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
        int ans[n * m];
        int i = 0;
        int row = 0, col = 0;
        bool check = true;
        while (row < n && col < m)
        {
            if (check)
            {
                while (row > 0 && col < m - 1)
                {
                    ans[i++] = a[row][col];
                    --row;
                    ++col;
                }
                ans[i++] = a[row][col];
                if (col == m - 1)
                    ++row;
                else
                    ++col;
            }
            else
            {
                while (row < n - 1 && col > 0)
                {
                    ans[i++] = a[row][col];
                    ++row;
                    --col;
                }
                ans[i++] = a[row][col];
                if (row == n - 1)
                    ++col;
                else
                    ++row;
            }
            check = !check;
        }
        int st = n * m;
        for (int j = 0; j < st; j++)
            cout << ans[j] << ' ';
        cout << "\n";
    }
    return 0;
}
