#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct ds
{
    int stt;
    string msv, name, lop, email, dn;
};

bool cmp(ds &a, ds &b)
{
    return a.msv < b.msv;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    ds a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].dn);
    }
    sort(a, a + n, cmp);
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < n; i++)
            if (a[i].dn == s)
                cout << a[i].stt << ' ' << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << ' ' << a[i].dn << endl;
    }
    return 0;
}
