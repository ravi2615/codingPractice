
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void primefactor(int n)
{
    int spf[n + 1] = {0};
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += 1)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    primefactor(n);
}

int main()
{

    fastio

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll T = 1;
    cin >> T;

    ll x = 1;
    while (x <= T)
    {
        solve();
        x++;
    }

    return 0;
}