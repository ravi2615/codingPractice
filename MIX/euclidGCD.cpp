

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void gcd(int n, int m)
{
    while(m){
        int  rem=n%m;
        n=m;
        m=rem;
    }
    cout<<n<<endl;
}

void solve()
{
    int n,m;
    cin >> n>>m;
    gcd(n,m);
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