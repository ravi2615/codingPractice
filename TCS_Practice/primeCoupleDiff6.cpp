
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

const long long MAX_SIZE = 1000001;
bool prime[1000000 + 1];

void count_prime()
{
int count=0;
memset(prime, true, sizeof(prime));
for (int p = 2; p * p <= MAX_SIZE; p++) 
{
if (prime[p] == true) 
 {
  for (int i = p * 2; i <= MAX_SIZE; i += p)
  prime[i] = false;
 }
}
}
void solve()
{

    int n, m, count = 0;
    cin >> n >> m;
    for (int i = n; i <= m - 6; i++)
        if (prime[i] && prime[i + 6]){

            count++;
            // cout<<prime[i]<<" "<<prime[i+6];
            }
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
    count_prime();
    while (x <= T)
    {
        solve();
        x++;
    }

    return 0;
}