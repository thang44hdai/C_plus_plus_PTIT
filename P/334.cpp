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
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= '1' && s[i] <= '9')
            {
                int x = s[i] - '0';
                while (s[i + 1] >= '0' && s[i + 1] <= '9')
                {
                    x = x * 10 + s[i + 1] - '0';
                    i++;
                }
                sum += x;
            }
        cout << sum << "\n";
    }
}
