#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> vt;
        for (auto &i : a)
        {
            cin >> i;
            vt.push_back(i);
        }
        sort(vt.begin(), vt.end());
        // for(auto i: vt) cout<<i<<" ";
        // cout<<"\n";
        int l = 0, r = n - 1;
        while (a[l] == vt[l])
            l++;
        while (a[r] == vt[r])
            r--;
        cout << l + 1 << " " << r + 1 << "\n";
    }

    return 0;
}
