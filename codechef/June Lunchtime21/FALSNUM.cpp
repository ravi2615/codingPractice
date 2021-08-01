
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9+7;


void solve(){
     string s;
     int f=1;
     cin>>s;
     int N = s.size();
         if(s[0] =='1')
         {
             cout<<s[0]<<'0';
         }
         else
         {
             cout<<'1'<<s[0];
         }

         for(int i=1; i<N;i++)
         cout<<s[i];
         cout<<endl;

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