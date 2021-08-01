
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int

void solve(){
     ll D, d, P, Q, ans = 0, i=0, sum = 0;
      cin >> D >> d >> P >> Q;
      ll n = D / d;
      ll r = D % d;
      ll np = n * P;
      ll nq = (Q * (n-1)*n)/2;
      sum = (np + nq) * d;

      ans = sum + r * (P + n * Q);
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