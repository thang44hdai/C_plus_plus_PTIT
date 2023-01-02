#include <bits/stdc++.h>

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
        int n, m;
        cin >> n >> m;
        int x = n * n;
        vector<int> vt;
        int k;
        while (x--)
        {
            cin >> k;
            vt.push_back(k);
        }
        sort(vt.begin(), vt.end());
        cout << vt[m - 1] << "\n";
    }
    return 0;
}