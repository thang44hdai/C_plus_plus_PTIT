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
        int a[n], sum[n];
        cin >> a[0];
        sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        int check = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if ((sum[n - 1] - a[i]) % 2 != 0)
                continue;
            if (2 * sum[i - 1] == sum[n - 1] - a[i])
            {
                cout << i + 1 << "\n";
                check = 0;
                break;
            }
        }
        if (check)
            cout << -1 << "\n";
    }

    return 0;
}