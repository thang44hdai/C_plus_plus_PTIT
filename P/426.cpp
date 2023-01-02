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
        int a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (l == r)
                cout << a[l] << " ";
            else
                cout << a[r] << " " << a[l] << " ";
            l++, r--;
        }
        cout << "\n";
    }

    return 0;
}
