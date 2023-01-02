#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
void solve(int n)
{
    int m = 8 * n * n;
    int c1[m];
    c1[0] = 8 * n * n + 2 * n;
    int cur = c1[0];
    int dd = 1, step = 2;
    int idx = 1;
    while (idx < m)
    {
        for (int i = 0; i < step; i++)
        {
            cur = c1[idx++] = (cur - 4 * n * dd);
            if (idx >= m)
                break;
        }
        if (idx >= m)
            break;
        for (int i = 0; i < step; i++)
        {
            cur = c1[idx++] = cur + dd;
            if (idx >= m)
                break;
        }
        dd = dd * (-1);
        step += 2;
    }
    int c2[m];
    for (int i = 0; i < m; i++)
        c2[i] = 16 * n * n + 1 - c1[i];
    for (int i = 0; i < m; i++)
        cout << c1[i] << ' ';
    cout << endl;
    for (int i = 0; i < m; i++)
        cout << c2[i] << ' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}
