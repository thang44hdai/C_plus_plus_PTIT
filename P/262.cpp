#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll sum = 0;
        ll a[n][m], b[3][3];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> b[i][j];
        for (int i = 0; i <= n - 3; i++)
            for (int j = 0; j <= m - 3; j++)
            {
                ll tong = 0;
                for (int k = i; k <= i + 2; k++)
                    for (int h = j; h <= j + 2; h++)
                        tong += a[k][h] * b[k - i][h - j];
                sum += tong;
            }
        cout << sum << "\n";
    }
    return 0;
}