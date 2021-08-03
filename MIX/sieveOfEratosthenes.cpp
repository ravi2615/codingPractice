
// O(N) time.

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
#define pb push_back
ll mod = 1e9 + 7;

const ll MAX_SIZE = 1000001;

vector<ll> isprime(MAX_SIZE, true);
vector<ll> prime;
vector<ll> spf(MAX_SIZE);

void sieve(int n)
{

    isprime[0] = isprime[1] = false;

    for (lli i = 2; i < n; i++)
    {
        if (isprime[i])
        {
            prime.pb(i);
            spf[i] = i;
        }
        for (lli j = 0; j < prime.size() && i * prime[j] <= n && prime[j] <= spf[i]; j++)
        {
            isprime[i * prime[j]] = false;

            spf[i * prime[j]] = prime[j];
            cout<<i*prime[j]<<" ";
        }
        cout<<endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    sieve(n);
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
        cout << prime[i] << " ";
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