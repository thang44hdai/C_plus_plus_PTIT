#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        if (n == 1)
            cout << a[0] << endl;
        else if (n == 2)
            cout << max(a[0], a[1]) << endl;
        else
        {
            ll tmp, tmp1 = a[0], tmp2 = a[1], tmp3 = a[0] + a[2];
            for (int i = 3; i < n; i++)
            {
                tmp = a[i];
                if (tmp1 > tmp2)
                    tmp += tmp1;
                else
                    tmp += tmp2;
                tmp1 = tmp2;
                tmp2 = tmp3;
                tmp3 = tmp;
            }
            cout << max(tmp2, tmp3) << "\n";
        }
    }
    return 0;
}
