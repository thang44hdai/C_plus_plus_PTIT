#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct gv
{
    string name, sj, mgv, lastName, msj;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    gv a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].name);
        getline(cin, a[i].sj);
        if (i < 9)
            a[i].mgv = "GV0";
        else
            a[i].mgv = "GV";
        a[i].mgv += to_string(i + 1);
        int len = a[i].name.length(), x;
        a[i].lastName = "";
        a[i].msj = "";
        a[i].msj += a[i].sj[0];
        for (int j = 0; j < a[i].sj.length(); j++)
            if (isblank(a[i].sj[j]))
                a[i].msj += toupper(a[i].sj[j + 1]);
    }
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        getline(cin, s);
        string tmp = "";
        tmp += s[0];
        for (int i = 0; i < s.length(); i++)
            if (isblank(s[i]))
                tmp += toupper(s[i + 1]);
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ':' << endl;
        for (int i = 0; i < n; i++)
            if (a[i].msj == tmp)
                cout << a[i].mgv << ' ' << a[i].name << ' ' << a[i].msj << endl;
    }
    return 0;
}