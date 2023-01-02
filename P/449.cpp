#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
int cnt[100005];
int a[100005];
int sol()
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] - k >= 0 and cnt[a[i] - k] == 1)
            return 1;
        if (cnt[a[i] + k] == 1)
            return 1;
    }
    return -1;
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
        cin >> n >> k;
        memset(cnt, 0, sizeof(cnt[0]));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        cout << sol() << "\n";
    }

    return 0;
}
