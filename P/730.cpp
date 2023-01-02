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
        int n;
        cin >> n;
        ll sum = 0, ans = INT_MIN;
        while (n--)
        {
            ll x;
            cin >> x;
            sum = max(x, sum + x);
            ans = max(ans, sum);
            /* code */
        }

        cout << ans << "\n";
    }
    return 0;
}
