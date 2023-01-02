#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct gv
{
    string mgv, name, sj, msj, xName;
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
        if (i < 9)
            a[i].mgv = "GV0";
        else
            a[i].mgv = "GV";
        a[i].mgv += to_string(i + 1);
        getline(cin, a[i].name);
        stringstream ss(a[i].name);
        a[i].xName = "";
        string s;
        while (ss >> s)
        {
            for (int i = 0; i < s.length(); i++)
                s[i] = tolower(s[i]);
            a[i].xName += s;
            a[i].xName += ' ';
        }
        a[i].xName.erase(a[i].xName.end() - 1);
        getline(cin, a[i].sj);
        a[i].msj = "";
        a[i].msj += a[i].sj[0];
        for (int j = 0; j < a[i].sj.length(); j++)
            if (isblank(a[i].sj[j]))
                a[i].msj += toupper(a[i].sj[j + 1]);
    }
    int t;
    cin >> t;
    string s;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ':' << endl;
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        vector<string> vs;
        stringstream ss(s);
        while (ss >> s)
            vs.push_back(s);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < vs.size(); j++)
            {
                if (a[i].xName.find(vs[j]) != -1)
                {
                    cout << a[i].mgv << ' ' << a[i].name << ' ' << a[i].msj << endl;
                    break;
                }
            }
        }
    }
    return 0;
}