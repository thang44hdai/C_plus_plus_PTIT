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
        int n;
        cin >> n;
        int a[n][n];
        vector<int> vt;
        int all = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                all += a[i][j];
                sum += a[i][j];
            }
            vt.push_back(sum);
        }
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
                sum += a[j][i];
            vt.push_back(sum);
        }
        sort(vt.begin(), vt.end());
        cout << vt[vt.size() - 1] * n - all << "\n";
    }
    return 0;
}