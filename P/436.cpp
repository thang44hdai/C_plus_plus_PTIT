#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n;

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
        int a[n];
        vector<int> b;
        for (auto &i : a)
        {
            cin >> i;
            b.push_back(i);
        }
        sort(b.begin(), b.end());
        for (auto i : a)
        {
            int idx = upper_bound(b.begin(), b.end(), i) - b.begin();
            if (idx < n)
                cout << b[idx] << " ";
            else
                cout << "_ ";
        }
        cout << "\n";
    }
    return 0;
}