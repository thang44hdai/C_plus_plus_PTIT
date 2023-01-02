#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct gv
{
    string name, id, full_name, ho, ten, mon, sub;
    gv()
    {
        this->ho = "";
        this->ten = "";
        this->sub = "";
    }
};
bool cmp(gv &a, gv &b)
{
    if (a.ten != b.ten)
        return a.ten < b.ten;
    return a.id < b.id;
}
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
        getline(cin, a[i].full_name);
        getline(cin, a[i].mon);
        if (i < 9)
            a[i].id = "GV0";
        else
            a[i].id = "GV";
        a[i].id += to_string(i + 1);
        string sol = a[i].full_name;
        stringstream ss(a[i].full_name);
        while (ss >> a[i].full_name)
            a[i].ten = a[i].full_name;
        stringstream aa(a[i].mon);
        while (aa >> a[i].mon)
        {
            a[i].sub += toupper(a[i].mon[0]);
        }
        a[i].full_name = sol;
    }
    sort(a, a + n, cmp);
    for (auto i : a)
        cout << i.id << " " << i.full_name << " " << i.sub << "\n";
    return 0;
}