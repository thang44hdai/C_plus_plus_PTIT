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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        ll dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int idx = lower_bound(a, a + n, a[i] + k) - a;
            dem += idx - i - 1;
        }
        cout << dem << "\n";
    }
    return 0;
}
