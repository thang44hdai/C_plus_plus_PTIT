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
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int idx = 0;
        int kq[n];
        for (int i = 0; i < n; i += 2)
            kq[i] = a[idx++];
        for (int i = 1; i < n; i += 2)
            kq[i] = a[idx++];
        for (auto i : kq)
            cout << i << " ";
        cout<<"\n";
    }
    return 0;
}
