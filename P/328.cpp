#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n, m;
string s;
int mod(int n)
{
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int du = 0;
        for (int j = i; j < s.length(); j++)
        {
            du = (du * 10 + s[j] - '0') % n;
            if (du == 0)
                cnt++;
        }
    }
    return cnt;
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
        cin >> s;
        cout << mod(8) - mod(24) << "\n";
    }
    return 0;
}