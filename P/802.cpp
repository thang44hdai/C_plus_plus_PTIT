#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int check(string s)
{
    if(s.length() > 10) return 0;
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return 0;
        sum = sum * 10 + s[i] - '0';
    }
    if(sum<=INT_MAX)
        return (int)sum;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DATA.in", "r", stdin);
    string s;
    ll sum = 0;
    while (cin >> s)
    {
        sum+=check(s);
    }
    cout << sum;

    return 0;
}