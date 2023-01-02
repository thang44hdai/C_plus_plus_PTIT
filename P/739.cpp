#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        int num = 1;
        st.push(num++);
        for (auto i : s)
        {
            if (i == 'G')
                st.push(num++);
            else
            {
                while (st.size())
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(num++);
            }
        }
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}