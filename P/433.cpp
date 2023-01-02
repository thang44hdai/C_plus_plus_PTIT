#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
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
        cin >> n;
        unordered_map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> vt;
        for (auto i : mp)
            vt.push_back(i);
        sort(vt.begin(), vt.end(), cmp);
        for (auto i : vt)
            for (int j = 1; j <= i.second; j++)
                cout << i.first << " ";
        cout << "\n";
    }
    return 0;
}