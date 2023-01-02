#include <bits/stdc++.h>
using namespace std;
struct ds
{
    string name;
    int ngay, thang, nam;
};
bool cmp(ds a, ds b)
{
    if (a.nam != b.nam)
        return a.nam > b.nam;
    else
    {
        if (a.thang != b.thang)
            return a.thang > b.thang;
        else
        {
            return a.ngay > b.ngay;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    ds a[n];
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> s;
        a[i].ngay = 10 * (s[0] - '0') + s[1] - '0';
        a[i].thang = 10 * (s[3] - '0') + s[4] - '0';
        a[i].nam = 1000 * (s[6] - '0') + 100 * (s[7] - '0') + 10 * (s[8] - '0') + s[9] - '0';
    }
    sort(a, a + n, cmp);
    cout << a[0].name << endl
         << a[n - 1].name;
    return 0;
}
