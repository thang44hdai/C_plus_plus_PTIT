#include <bits/stdc++.h>

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
        int f[n];
        for (auto &i : f)
            cin >> i;
        int cnt = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (f[l] == f[r])
            {
                l++;
                r--;
            }
            else if (f[l] < f[r])
            {
                l++;
                f[l] += f[l - 1];
                cnt++;
            }
            else
            {
                r--;
                f[r] += f[r + 1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}