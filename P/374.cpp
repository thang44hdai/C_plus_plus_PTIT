#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int a = 0, b = 0, l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'A')
        {
            if (a < b)
                b = a + 1;
            else
                b++;
        }
        else
        {
            if (a < b)
                a++;
            else
                a = b + 1;
        }
    }
    cout << a;
    return 0;
}