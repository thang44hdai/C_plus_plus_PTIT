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
        string num = "";
        string test = "";
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
                num += '2';
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
                num += '3';
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
                num += '4';
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
                num += '5';
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
                num += '6';
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
                num += '7';
            else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
                num += '8';
            else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
                num += '9';
        }
        for (int i = num.length() - 1; i >= 0; i--)
            test += num[i];
        if (test == num)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
