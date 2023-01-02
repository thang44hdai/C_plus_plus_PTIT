#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> mp;
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");
    string s;
    while (fin1 >> s)
    {
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        if (!mp[s])
            mp[s]++;
    }
    while (fin2 >> s)
    {
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        if (mp[s] == 1)
            mp[s]++;
    }
    for (auto i : mp)
        cout << i.first << " ";
    cout << "\n";
    for (auto i : mp)
        if (i.second == 2)
            cout << i.first << " ";

    return 0;
}