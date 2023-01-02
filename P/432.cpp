#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
bool cmp(string a, string b)
{
    return a + b > b + a;
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
        string a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n, cmp);
        for (auto i : a)
            cout << i;
        cout << "\n";
    }
    return 0;
}
