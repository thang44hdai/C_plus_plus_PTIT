#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int check(string s)
{
    unordered_map<char, int> mp;
    int Max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        Max = mp[s[i]];
    }
    if (Max <= s.length() - Max + 1)
        return 1;
    return 0;
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
        string a;
        cin >> a;
        cout << check(a) << "\n";
    }
}