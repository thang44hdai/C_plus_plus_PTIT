#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

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
        unordered_set<char> set;
        for (auto i : s)
            set.insert(i);
        int n = set.size();
        int Min = INT_MAX;
        int d[500] = {};
        int len = 0, l = 0;
        for (int i = 0; i < s.length(); i++)
        {
            d[s[i]]++;
            if (d[s[i]] == 1)
                len++;
            if (len == n)
            {
                while (d[s[l]] > 1)
                {
                    d[s[l]]--;
                    l++;
                }
                Min = min(Min, i - l + 1);
            }
        }
        cout << Min << "\n";
    }
    return 0;
}