#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct SinhVien
{
    string id, name, Class;
    float p1, p2, p3;
};
void nhap(SinhVien &a)
{
    scanf("\n");
    getline(cin, a.id);
    getline(cin, a.name);
    getline(cin, a.Class);
    cin >> a.p1 >> a.p2 >> a.p3;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.id < b.id;
}
void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i].Class << " ";
        printf("%.1f %.1f %.1f\n", ds[i].p1, ds[i].p2, ds[i].p3);
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}