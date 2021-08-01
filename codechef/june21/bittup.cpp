
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9+7;

ll power(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result = (result * base) % mod;
        exp >>= 1;
        if (!exp)
            break;
       base = (base * base) % mod;
    }

    return result % mod;
}

void solve(){
     ll n, m;
     cin >> n >> m;
    ll ans =  power( 2, n ) %mod -1;
    ans = power(ans , m) %mod;
    cout << ans <<endl;
}

int main(){

    fastio

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll T = 1 ;
    cin >> T ;
   

      ll x = 1 ; 
      while( x <= T ){
        solve();
        x++;
      }
    
    return 0;
}