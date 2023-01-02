#include <bits/stdc++.h>

using namespace std;
int n;
int a[25] = {};
int check = 0;
void print()
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
}
void sinh()
{
    int idx = n - 1;
    while (a[idx] == 1)
    {
        a[idx] = 0;
        idx--;
    }
    if (idx == -1)
        check = 1;
    else
        a[idx] = 1;
}
void sol()
{
    while (!check)
    {
        print();
        sinh();
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
        fill(a, a + 25, 0);
        check = 0;
        sol();
        cout << "\n";
    }

    return 0;
}
