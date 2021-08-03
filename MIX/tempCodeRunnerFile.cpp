
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