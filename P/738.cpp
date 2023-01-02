#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
int a[1005];
int sol()
{
    int res = 0;
    while (1)
    {
        int cnt = 0, i;
        for (i = 0; i < n; ++i)
        {
            if (a[i] & 1)
                break;
            else if (!a[i])
                ++cnt;
        }
        if (cnt == n)
            return res;
        if (i == n)
        {
            for (int j = 0; j < n; j++)
                a[j] /= 2;
            res++;
        }
        for (int j = i; j <= n; j++)
        {
            if (a[j] & 1)
            {
                a[j]--;
                res++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << sol() << "\n";
    }
    return 0;
}