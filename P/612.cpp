#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int cnt = 1;
class SinhVien
{
private:
    string id, name, Class, date;
    float p;

public:
    SinhVien()
    {
        this->id = "";
        this->name = "";
        this->Class = "";
        this->date = "";
        this->p = 0;
    }
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        is.ignore();
        getline(is, a.name);
        getline(is, a.Class);
        if (cnt < 10)
            a.id = "B20DCCN00" + to_string(cnt);
        else
            a.id = "B20DCCN0" + to_string(cnt);
        is >> a.date >> a.p;
        if (a.date[2] != '/')
            a.date = "0" + a.date;
        if (a.date[5] != '/')
            a.date.insert(a.date.begin() + 3, '0');
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
        os << a.id << " " << a.name << a.Class << " " << a.date << " " << setprecision(2) << fixed << a.p << "\n";
        return os;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}