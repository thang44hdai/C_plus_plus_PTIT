#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
struct ds
{
    int a, b, c;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int p;
    //     cin >> p;
    //     int ans = 0;
    //     int tmp = p;
    //     while (tmp <= n)
    //     {
    //         ans += n / tmp;
    //         tmp = tmp * p;
    //     }
    //     cout << ans << endl;
    // }
    int n;
    cin>>n;
    ds a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].a;
    for(auto i: a)
        cout<<i.a;
}