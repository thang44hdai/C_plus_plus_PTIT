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
        ll a[n];
        for (auto &i : a)
            cin >> i;
        ll Max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ll tich = 1;
            for (int j = i; j < n; j++)
            {
                tich *= a[j];
                Max = max(Max, tich);
            }
        }
        cout << Max << "\n";
    }
    return 0;
}