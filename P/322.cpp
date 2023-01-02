#include <bits/stdc++.h>
#define ll long long
void tong(char a[], char b[])
{
    ll n1 = strlen(a), n2 = strlen(b);
    int c1[n1], c2[n1], sum[n1];
    for (int i = 0; i < n1; i++)
        c1[i] = a[i] - '0';
    for (int i = 0; i < n2; i++)
        c2[i] = b[i] - '0';
    int res, nho = 0, n = 0;
    for (int i = n2; i < n1; i++)
        c2[i] = 0;
    for (int i = 0; i < n1; i++)
    {
        res = c1[i] + c2[i] + nho;
        sum[n++] = res % 10;
        nho = res / 10;
    }
    if (nho)
        sum[n++] = nho;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }
    printf("\n");
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        scanf("\n");
        char a[10005], b[10005];
        cin >> a >> b;
        int check = 0;
        if (strcmp(a, b) > 0)
            check = 1;
        reverse(a, a + strlen(a));
        reverse(b, b + strlen(b));
        if (strlen(a) > strlen(b) || (strlen(a) == strlen(b) && check == 1))
            tong(a, b);
        else
            tong(b, a);
    }
    return 0;
}