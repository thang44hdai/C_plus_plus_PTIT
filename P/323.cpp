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
        ll m;
        cin >> m;
        ll du = 0;
        for (int i = 0; i < s.length(); i++)
            du = (du * 10 + s[i] - '0') % m;
        cout << du << "\n";
    }
}
