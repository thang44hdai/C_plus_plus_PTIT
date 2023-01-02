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
        set<int> st;
        int n, m;
        cin >> n >> m ;
        int cnt[100005] = {};
        int a[n], b[m];
        for (auto &i : a)
        {
            cin >> i;
            st.insert(i);
            if (cnt[i] < 1)
                cnt[i]++;
        }
        vector<int> kq;
        for (auto &i : b)
        {
            cin >> i;
            st.insert(i);
            if (cnt[i] == 1)
                kq.push_back(i);
        }
        for (auto i : st)
            cout << i << " ";
        cout << "\n";
        for (auto i : kq)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}
