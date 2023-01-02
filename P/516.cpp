#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

struct matHang
{
    string tenMatHang, nhomHang;
    double giaMua, giaBan, loiNhuan;
    int ma;
};

bool cmp(matHang a, matHang b)
{
    return a.loiNhuan > b.loiNhuan;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    matHang a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin, a[i].tenMatHang);
        getline(cin, a[i].nhomHang);
        cin >> a[i].giaMua >> a[i].giaBan;
        a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
        a[i].ma = i + 1;
    }
    sort(a, a + n, cmp);
    for(int i=0;i<n;i++) cout << a[i].ma << ' ' << a[i].tenMatHang << ' ' << a[i].nhomHang << ' ' << setprecision(2) << fixed << a[i].loiNhuan << endl;
    return 0;
}