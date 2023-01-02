#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    while (b)
    {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

struct PhanSo
{
    ll tu, mau;
};

void RG(PhanSo &a)
{
    ll GCD = gcd(a.tu, a.mau);
    a.tu /= GCD;
    a.mau /= GCD;
}

PhanSo calc2(PhanSo a, PhanSo b)
{
    PhanSo ans;
    ans.tu = a.tu * b.tu;
    ans.mau = a.mau * b.mau;
    RG(ans);
    return ans;
}

PhanSo calc1(PhanSo &a, PhanSo &b)
{
    PhanSo ans;
    ll lcm = a.mau * b.mau / gcd(a.mau, b.mau);
    ans.mau = lcm;
    ans.tu = a.tu * lcm / a.mau + b.tu * lcm / b.mau;
    RG(ans);
    ans = calc2(ans, ans);
    RG(ans);
    return ans;
}

void process(PhanSo &A, PhanSo &B)
{
    PhanSo C, D;
    C = calc1(A, B);
    D = calc2(A, calc2(B, C));
    cout << C.tu << '/' << C.mau << ' ' << D.tu << '/' << D.mau << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
    return 0;
}
