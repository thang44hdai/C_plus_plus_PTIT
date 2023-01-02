#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct sv
{
    string msv, name, lop, email;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    sv a[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
    }
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int len = s.length();
        cout << "DANH SACH SINH VIEN KHOA " << s << ':' << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].lop[1] == s[len - 2] && a[i].lop[2] == s[len - 1])
                cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
        }
    }
    return 0;
}