#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int check(string s)
{
    int n = s.length();
    if (n <= 1)
        return 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return 0;
        l++, r--;
    }
    return 1;
}
bool cmp(string a, string b)
{
    if (a.length() != b.length())
        return a.length() > b.length();
    int n = a.length();
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            return a[i] > b[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    vector<string> vt;
    unordered_map<string, ll> mp;
    while (cin >> s)
    {
        if (check(s))
        {
            mp[s]++;
            vt.push_back(s);
        }
    }
    sort(vt.begin(), vt.end(), cmp);
    for (int i = 0; i < vt.size(); i++)
        if (mp[vt[i]])
        {
            cout << vt[i] << " " << mp[vt[i]] << "\n";
            mp[vt[i]] = 0;
        }

    return 0;
}
