#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> kq;
    unordered_map<string, int> mp;
    while (t--)
    {
        scanf("\n");
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> vt;
        int idx = 0;
        while (ss >> s)
            vt.push_back(s);
        string sol = "";
        for (int i = 0; i < vt[vt.size() - 1].size(); i++)
            sol += tolower(vt[vt.size() - 1][i]);
        for (int i = 0; i < vt.size() - 1; i++)
            sol += tolower(vt[i][0]);
        mp[sol]++;
        if (mp[sol] > 1)
            sol += mp[sol] + '0';
        sol += "@ptit.edu.vn";
        cout << sol << "\n";
    }
    return 0;
}