
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9+7;


void solve(){
     int n , m;
     cin >> n >> m;
     int a[n], aux[n], b[m];
     for( int i = 0; i < n; i++)
     cin >> a[i];
     for( int i = 0; i < m; i++)
     cin >> b[i];

     int r = -1, l = -1, mx = INT_MAX;

     for(int i = 0; i < n ; i++){
         if(a[i] == 0)
         aux[i] = mx;
         else
         aux[i] = 0;
     }
     aux[0]=0;
     for( int i = 0; i < n; i++)
     {
         if(a[i]==1)
         r = i;
         if(r != -1 && a[i] == 0){
            aux[i] = min(aux[i], (i-r));
         }
     }
     for( int i = n-1; i >= 0; i--)
     {
         if(a[i]==2)
         l = i;
          if(l != -1 && a[i] == 0){
            aux[i] = min(aux[i], (l-i));
         }
     }

     for( int i = 0; i < m; i++)
      {
          int t = b[i] -1;
          if(aux[t] != mx)
          cout<< aux[t]<< " ";
          else
          cout<< -1<< " ";
      }
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