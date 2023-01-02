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
        int sum = 0;
        vector<char> vt;
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= '1' && s[i] <= '9')
                sum += s[i] - '0';
            else if (s[i] >= 'A' && s[i] <= 'Z')
                vt.push_back(s[i]);
        sort(vt.begin(), vt.end());
        for (auto i : vt)
            cout << i;
        cout << sum << "\n";
    }
}
