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
        int ans = 0, sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i];
        int l = k - 1;
        ans = max(ans, sum);
        for (int i = k; i < n; i++)
        {
            sum += a[i] - a[i - k];
            if (ans < sum)
            {
                ans = sum;
                l = i;
            }
        }
        for (int i = l - k + 1; i <= l; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
