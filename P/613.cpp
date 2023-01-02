#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int cnt = 1;
class SinhVien
{
public:
    string id, name, Class;
    int d, m, y;
    float p;

public:
    SinhVien()
    {
        this->id = "";
        this->name = "";
        this->Class = "";
        this->p = 0;
    }
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        scanf("\n");
        getline(is, a.name);
        getline(is, a.Class);
        scanf("%d/%d/%d", &a.d, &a.m, &a.y);
        is >> a.p;
        if (cnt < 10)
            a.id = "B20DCCN00" + to_string(cnt);
        else
            a.id = "B20DCCN0" + to_string(cnt);
        stringstream ss(a.name);
        string sol = "";
        while (ss >> a.name)
        {
            a.name[0] = toupper(a.name[0]);
            for (int i = 1; i < a.name.length(); i++)
                a.name[i] = tolower(a.name[i]);
            sol += a.name + " ";
        }
        a.name = sol;
        cnt++;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        os << a.id << " " << a.name << a.Class << " ";
        printf("%.2d/%.2d/%.2d %.2f\n", a.d, a.m, a.y, a.p);
        return os;
    }
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.p > b.p;
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}