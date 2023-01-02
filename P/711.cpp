#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long
int n;
void sol()
{
    int a[n] = {};
    for (auto i : a)
        cout << i;
    cout << " ";
    while (1)
    {
        int idx = n - 1;
        while (a[idx] == 1)
            idx--;
        if (idx == -1)
            return;
        a[idx] = 1;
        for (int i = idx + 1; i < n; i++)
            a[i] = 0;
        for (auto i : a)
            cout << i;
        cout << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sol();
        cout << "\n";
    }
    return 0;
}