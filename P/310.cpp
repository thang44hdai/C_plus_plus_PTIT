#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

ll minNum(string s)
{
    int len = s.length() - 1;
    ll res = 0;
    for(int i=0;i<=len;i++)
    {
        if (s[i] == '6')
            res = res * 10 + 5;
        else
            res = res * 10 + s[i] - '0';
    }
    return res;
}

ll maxNum(string s)
{
    int len = s.length() - 1;
    ll res = 0;
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == '5')
            res = res * 10 + 6;
        else
            res = res * 10 + s[i] - '0';
    }
    return res;
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
        string a, b;
        cin >> a >> b;
        cout << minNum(a) + minNum(b) << " " << maxNum(a) + maxNum(b) << "\n";
    }
}