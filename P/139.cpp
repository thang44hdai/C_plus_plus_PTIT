#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int nt[100000];
void sang()
{
    fill(nt, nt + 100000, 1);
    int n = sqrt(100000);
    nt[0] = nt[1] = 0;
    for (int i = 0; i <= n; i++)
        if (nt[i])
            for (int j = i * i; j <= 100000; j += i)
                nt[j] = 0;
}
int tong_cs(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int tong_nt(int t)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(t); i++)
    {
        while (t % i == 0)
        {
            sum += tong_cs(i);
            t /= i;
        }
    }
    if (t > 1)
        return sum + tong_cs(t);
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (nt[n] == 1)
            cout << "NO\n";
        else
        {
            if (tong_cs(n) == tong_nt(n))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
