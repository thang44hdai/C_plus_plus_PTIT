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
        int n;
        cin >> n;
        int a[n];
        for (auto &i : a)
            cin >> i;
        int b[n];
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            b[i] = max(b[i + 1], a[i]);
        int l = 0, r = 0;
        int ans = -1;
        while (l < n and r < n)
        {
            if (a[l] <= b[r])
            {
                ans = max(ans, abs(l - r));
                r++;
            }
            else
                l++;
        }
        cout << ans << "\n";
    }

    return 0;
}
