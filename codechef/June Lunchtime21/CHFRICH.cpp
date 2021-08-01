
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9+7;


void solve(){
     ll a,b,x;
     cin>>a>>b>>x;
     ll ans = (b-a)/x;
     cout<<ans<<endl;
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