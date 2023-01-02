#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
ll a[5005];
string sol()
{
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
        {
            ll sqr = sqrt(a[i] * a[i] + a[j] * a[j]);
            if (sqr * sqr == a[i] * a[i] + a[j] * a[j] && binary_search(a + j, a + n, sqr) == 1)
                return "YES";
        }
    return "NO";
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
