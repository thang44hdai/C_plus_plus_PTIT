#include <bits/stdc++.h>

using namespace std;
#define ll long long
int x[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int y[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
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
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (a[i][j])
                {
                    cnt++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    while (q.size())
                    {
                        pair<int, int> top = q.front();
                        a[top.first][top.second] = 0;
                        q.pop();
                        for (int i = 0; i < 8; i++)
                        {
                            int dx = top.first + x[i];
                            int dy = top.second + y[i];
                            if (dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy] == 1)
                            {
                                q.push({dx, dy});
                                a[dx][dy] = 0;
                            }
                        }
                    }
                }
            }
        cout << cnt << "\n";
    }
    return 0;
}