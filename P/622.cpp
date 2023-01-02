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
        cout << "DANH SACH SINH VIEN LOP " << s << ':' << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].lop == s)
                cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
        }
    }

    return 0;
}