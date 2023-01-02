#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        unordered_map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            a.push_back(x);
            mp[x]++;
        }
        while (m--)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        for (auto i : b)
        {
            if (binary_search(a.begin(), a.end(), i))
            {
                for (int j = 1; j <= mp[i]; j++)
                    cout << i << " ";
                mp[i] = 0;
            }
        }
        for (auto i : a)
            if (mp[i])
                cout << i << " ";
        cout << "\n";
    }

    return 0;
}
