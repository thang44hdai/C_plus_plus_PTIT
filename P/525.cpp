#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct SV
{
    string msv, ten, lop;
    double d1, d2, d3;
};

bool cmp(SV a, SV b)
{
    return a.ten < b.ten;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    SV a[t];
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a, a + t, cmp);
    for (int i = 0; i < t; i++)
        cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << setprecision(1) << fixed << ' ' << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << endl;
    return 0;
}
