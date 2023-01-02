#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int sol(string n)
{
    ll sum = 0;
    for (int i = 0; i < n.length(); i++)
        sum += n[i] - '0';
    if (sum >= 10)
        return sol(to_string(sum));
    if (sum == 9)
        return 1;
    return 0;
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
        string n;
        cin >> n;
        cout << sol(n) << "\n";
    }
}