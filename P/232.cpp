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
        int x = 0;
        for (int i = 0; i < m; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
                if (a[j][i] == 1)
                    cnt++;
            if (cnt == n)
                x++;
        }
        cout << x * n << "\n";
    }
    return 0;
}