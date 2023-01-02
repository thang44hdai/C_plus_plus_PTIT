#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    if (a.second.first != b.second.first)
        return a.second.first < b.second.first;
    if (a.second.second != b.second.second)
        return a.second.second < b.second.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    pair<int, pair<int, int>> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    sort(a, a + n, cmp);
    for (auto i : a)
        cout << i.first << " " << i.second.first << " " << i.second.second << "\n";
    return 0;
}
