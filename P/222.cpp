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
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        int cnt[100005] = {};
        for (int i = 0; i < n; i++)
            if (cnt[a[0][i]] == 0)
                cnt[a[0][i]]++;
        for (int i = 1; i < n; i++)
            for (int j = 0; j < n; j++)
                if (cnt[a[i][j]] == i)
                    cnt[a[i][j]]++;
        int dem = 0;
        for (int i = 0; i < n; i++)
            if (cnt[a[n - 1][i]] == n)
            {
                dem++;
                cnt[a[n - 1][i]] = 0;
            }
        cout << dem << "\n";
    }
    return 0;
}
