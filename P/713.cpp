#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
int a[25];
void sol()
{
    while (1)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << " ";
        int i = n - 1;
        while (i > 0 and a[i] > a[i + 1])
            i--;
        if (i == 0)
            return;
        int j = n;
        while (a[j] < a[i])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            a[i] = i;
        sol();
        cout << "\n";
    }

    return 0;
}
