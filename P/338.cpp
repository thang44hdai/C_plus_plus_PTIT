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
        string a;
        int k;
        cin >> a >> k;
        int dd[26] = {}, n = a.length(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            int dd[26] = {}, l = n, s = 0, r = n;
            for (int j = i; j < n; j++)
            {
                if (!dd[a[j] - 'a'])
                    s++;
                dd[a[j] - 'a']++;
                if (s == k)
                {
                    l = j;
                    break;
                }
            }
            for (int j = l + 1; j < n; j++)
            {
                if (!dd[a[j] - 'a'])
                {
                    r = j;
                    break;
                }
            }
            if (l <= r)
                ans += r - l;
        }
        cout << ans << endl;
    }
    return 0;
}
