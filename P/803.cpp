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
    int x;
    map<ll, int> mp;
    while (cin >> x)
        mp[x]++;
    for (auto i : mp)
        cout << i.first << " " << i.second << "\n";

    return 0;
}