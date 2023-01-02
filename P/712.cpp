#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
int a[25];
void sol()
{
    while (1)
    {
        for (int i = 1; i <= k; i++)
            cout << a[i];
        cout << " ";
        int idx = k;
        while (idx > 0 && a[idx] >= n - k + idx)
            idx--;
        if (idx == 0)
            return;
        a[idx]++;
        for (int i = idx + 1; i <= k; i++)
            a[i] = a[idx] + i - idx;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            a[i] = i;
        sol();
        cout << "\n";
    }

    return 0;
}
