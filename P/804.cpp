#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("VANBAN.in", "r", stdin);
    string s;
    set<string> st;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        st.insert(s);
    }
    for (auto i : st)
        cout << i << "\n";
    return 0;
}