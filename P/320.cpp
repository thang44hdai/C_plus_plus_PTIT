#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
string sol(string s)
{
    if (s[0] == '0')
        return "INVALID";
    int n = s.length();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
        if (s[i] >= '0' && s[i] <= '9')
            mp[s[i]]++;
        else
            return "INVALID";
    for (char i = '0'; i <= '9'; i++)
        if (mp[i] == 0)
            return "NO";
    return "YES";
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
        string s;
        cin >> s;
        cout << sol(s) << "\n";
    }
}