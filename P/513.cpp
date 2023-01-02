#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct SinhVien
{
    string msv, name, lop, bd;
    float GPA;
};
int cnt = 0;
void nhap(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ++cnt;
        if (cnt < 10)
            a[i].msv = "B20DCCN00" + to_string(cnt);
        else
            a[i].msv = "B20DCCN0" + to_string(cnt);
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].lop >> a[i].bd >> a[i].GPA;
        if (a[i].bd[2] != '/')
            a[i].bd = "0" + a[i].bd;
        if (a[i].bd[5] != '/')
            a[i].bd.insert(3, "0");
    }
}

void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].bd << ' ' << setprecision(2) << fixed << a[i].GPA << endl;
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}