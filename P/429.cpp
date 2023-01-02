#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k, b;
	cin >> n >> k >> b;
	vector<int> vt(n + 5, 1);
	while (b--)
	{
		int x;
		cin >> x;
		vt[x] = 0;
	}
	int tmp = 0;
	for (int i = 1; i <= k; i++)
		if (!vt[i])
			tmp++;
	int ans = tmp;
	//cout << ans << " ";
	for (int i = k + 1; i <= n; i++)
	{
		if (!vt[i])
			tmp++;
		if (!vt[i - k ])
			tmp--;
		ans = min(ans, tmp);
		//cout << ans << " ";
	}
	cout << ans;

	return 0;
}
