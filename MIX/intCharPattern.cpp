
// input n=5
// output:
// 1 2 3 4 5 
// A B C D E 
// 2 3 4 5 6 
// B C D E F 
// 3 4 5 6 7 

// n=6
// 1 2 3 4 5 6 
// A B C D E F 
// 2 3 4 5 6 7 
// B C D E F G 
// 3 4 5 6 7 8 
// C D E F G H 



#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void pattern(int n)
{
    for(int i =0;i<n;i++){
        if(i%2==0)
        for(int j=0;j<n;j++){
            cout<<i/2+1+j<<" ";
        }
        else
        for(int j=0;j<n;j++){
            cout<<(char)(i/2+j+65)<<" ";
        }
        
        cout<<endl;
    }
}

void solve()
{
    int n;
    cin>>n;
    pattern(n);
    
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