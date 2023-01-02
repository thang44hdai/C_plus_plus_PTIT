#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
string sol(int a[], int l, int r)
{
    while (a[l] <= a[l + 1])
        l++;
    while (a[l] >= a[l+1])
        l++;
    if (l < r)
        return "No";
    return "Yes";
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
        int n;
        cin >> n;
        int a[n];
        for (auto &i : a)
            cin >> i;
        int l, r;
        cin >> l >> r;
        cout << sol(a, l, r);
        cout << "\n";
    }
    return 0;
}