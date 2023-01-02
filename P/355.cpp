#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int cnt = 0;
    while (cin >> s)
    {
        if (!cnt)
        {
            if (s[s.length() - 1] == '.' || s[s.length() - 1] == '!' || s[s.length() - 1] == '?')
            {
                s[0] = toupper(s[0]);
                cout << s[0];
                for (int i = 1; i < s.length() - 1; i++)
                {
                    s[i] = tolower(s[i]);
                    cout << s[i];
                }
                cout << "\n";
                cnt = 0;
            }
            else
            {
                s[0] = toupper(s[0]);
                for (int i = 1; i < s.length(); i++)
                    s[i] = tolower(s[i]);
                cout << s << " ";
                cnt++;
            }
        }
        else
        {
            if (s[s.length() - 1] == '.' || s[s.length() - 1] == '!' || s[s.length() - 1] == '?')
            {
                for (int i = 0; i < s.length() - 1; i++)
                {
                    s[i] = tolower(s[i]);
                    cout << s[i];
                }
                cout << "\n";
                cnt = 0;
            }
            else
            {
                for (int i = 0; i < s.length(); i++)
                    s[i] = tolower(s[i]);
                cout << s << " ";
                cnt++;
            }
        }
    }
}
