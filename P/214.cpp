#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int f[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> f[i];
        deque<int> dq;
        int Min = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            while (!dq.empty() && f[i] > f[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        cout << f[dq.front()] << " ";
        for (int i = k + 1; i <= n; i++)
        {
            if (dq.front() == i - k)
                dq.pop_front();
            while (!dq.empty() && f[dq.back()] < f[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            cout << f[dq.front()] << " ";
        }
        cout << "\n";
    }
    return 0;
}
