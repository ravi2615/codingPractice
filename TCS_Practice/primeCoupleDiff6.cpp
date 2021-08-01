
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

vector<long long >isprime(mod , true);
vector<long long >prime;
vector<long long >SPF(mod);

void solve()
{
    prime();

    int n, m, count = 0;
    cin >> n >> m;
    for (int i = n; i <= m - 6; i++)
        if (prime[i] && prime[i + 6])

            count++;
    if (count > 0)
        cout << count;
    else
        cout << "No Prime Pairs";
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