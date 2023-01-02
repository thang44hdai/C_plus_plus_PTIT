#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        scanf("\n");
        string s, p;
        getline(cin, s);
        getline(cin, p);
        vector<string> vt1;
        vector<string> vt2;
        stringstream ss(s);
        stringstream pp(p);
        while (ss >> s)
            vt1.pb(s);
        while (pp >> p)
            vt2.pb(p);
        for (int i = 0; i < vt1.size() - 1; i++)
            for (int j = i + 1; j < vt1.size(); j++)
                if (vt1[i] == vt1[j])
                {
                    vt1.erase(vt1.begin() + j);
                    j--;
                    i--;
                }
        for (int i = 0; i < vt1.size(); i++)
            for (int j = 0; j < vt2.size(); j++)
                if (vt1[i] == vt2[j])
                {
                    vt1.erase(vt1.begin() + i);
                    i--;
                }
        sort(vt1.begin(), vt1.end());
        for (auto i : vt1)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}