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
        for (auto &i : a)
            cin >> i;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        queue<int> q, p;
        for (auto i : a)
            if (i > 0)
                q.push(i);
            else p.push(0);
        while (q.size())
        {
            cout<<q.front()<<" ";
            q.pop();
            /* code */
        }
        while(p.size())
        {
            cout<<0<<" ";
            p.pop();
        }
        
        cout << "\n";
    }

    return 0;
}
