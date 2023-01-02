#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < s.length() - 2; i++)
        {
            if (s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '0')
            {
                s.erase(s.begin() + i, s.begin() + i + 3);
                i = -1;
            }
            if (s.length() < 3)
                break;
        }
        if (n == s.length())
            cout << "\n";
        else
            cout << n - s.length() << "\n";
    }
    return 0;
}