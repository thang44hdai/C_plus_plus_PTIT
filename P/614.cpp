#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int cnt = 0;

class NhanVien
{
private:
    string mnv, name, sex, bd, add, mst, date;

public:
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        ++cnt;
        a.mnv = "000";
        if (cnt < 10)
            a.mnv += "0" + to_string(cnt);
        else
            a.mnv += to_string(cnt);
        is.ignore();
        getline(is, a.name);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.add);
        is >> a.mst >> a.date;
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a)
    {
        cout << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.bd << ' ' << a.add << ' ' << a.mst << ' ' << a.date << endl;
        return os;
    }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}