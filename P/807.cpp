#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DATA.in", "r", stdin);
    map<int, int> mp;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto i : a)
        if (!mp[i])
            mp[i]++;
    for (auto i : b)
        if (mp[i] == 1)
            mp[i]++;
    for (auto i : mp)
        if (i.second == 2)
            cout << i.first << " ";

    return 0;
}