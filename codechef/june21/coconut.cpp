
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int

void solve(){
    
    int xa, xb, Xa, Xb;
    cin>> xa >> xb >> Xa >> Xb;

    int a = Xa/xa;
    int b = Xb/xb;

    int ans = a + b;
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