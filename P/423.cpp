#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        int ans = 0;
        for (int x : a)
        {
            if (x <= k)
            {
                ans++;
            }
        }
        int check = 0;
        int as1 = 0;
        for (int i = 0; i < ans; i++)
        {
            if (a[i] <= k)
            {
                check++;
            }
        }
        as1 = max(as1, check);
        for (int i = ans; i < n; i++)
        {
            if (a[i - ans] <= k)
            {
                check--;
            }
            if (a[i] <= k)
            {
                check++;
            }
            as1 = max(as1, check);
        }
        cout << ans - as1 << endl;
    }
}