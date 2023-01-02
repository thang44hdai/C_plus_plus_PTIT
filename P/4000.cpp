#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct SinhVien
{
    string name, Class;
    int d, m, y;
    float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.name);
    getline(cin, a.Class);
    scanf("%d/%d/%d", &a.d, &a.m, &a.y);
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001 " << a.name << " " << a.Class << " ";
    printf("%.2d/%.2d/%.4d %.2f", a.d, a.m, a.y, a.gpa);
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}