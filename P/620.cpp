#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
class sv
{
public:
    string id, name, Class, email;

public:
    friend istream &operator>>(istream &is, sv &a)
    {
        scanf("\n");
        getline(is, a.id);
        getline(is, a.name);
        getline(is, a.Class);
        getline(is, a.email);
        return is;
    }
    friend ostream &operator<<(ostream &os, sv &a)
    {
        os << a.id << " " << a.name << " " << a.Class << " " << a.email << "\n";
        return os;
    }
};
bool cmp(sv a, sv b)
{
    if (a.Class != b.Class)
        return a.Class < b.Class;
    return a.id <= b.id;
}
int main()
{
    int n;
    cin >> n;
    sv ds[n];
    for (auto &i : ds)
        cin >> i;
    sort(ds, ds + n, cmp);
    for (auto i : ds)
        cout << i;
    return 0;
}