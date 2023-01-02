#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int cnt = 0;

class NhanVien
{
    public:
    string mnv, name, sex, bd, add, mst, date, d, m, y;
    public:
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        ++cnt;
        a.mnv = "000";
        if(cnt < 10) a.mnv += "0" + to_string(cnt);
        else a.mnv += to_string(cnt);
        is.ignore();
        getline(is, a.name);
        getline(is, a.sex);
        getline(is, a.bd);
        stringstream ss(a.bd);
        getline(ss, a.m, '/');
        getline(ss, a.d, '/');
        getline(ss, a.y, '/');
        getline(is, a.add);
        is >> a.mst >> a.date;
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien &a)
    {
        cout << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.bd << ' ' << a.add << ' ' << a.mst << ' ' << a.date << endl;
        return os;
    }
};

bool cmp(NhanVien &a, NhanVien &b)
{
    if(a.y < b.y) return 1;
    if(a.y > b.y) return 0;
    if(a.m < b.m) return 1;
    if(a.m > b.m) return 0;
    if(a.d < b.d) return 1;
    return 0;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}