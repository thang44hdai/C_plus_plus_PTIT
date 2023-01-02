#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt[5005] = {};
    int x;
    vector<int> a;
    while (cin >> x)
    {
        a.push_back(x);
        cnt[x]++;
    }
    for (auto i : a)
        if (cnt[i])
        {
            cout << i << " " << cnt[i] << "\n";
            cnt[i] = 0;
        }

    return 0;
}