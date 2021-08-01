// Problem
// FirstRepeatingElement

// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.
// Constraints
// 1 <= N <= 10^6
// 0 <= Ai <= 10^6
// Example
// Input:
// 7
// 1 5 3 4 3 5 6
// Output:
// 2
// Explanation:
// 5 is appearing twice and its first appearance is at index 2 which is less than 3
// whose first occurring index is 3.

// Solution:

#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int
const int N = 1e6+2;
int idx[N], minidx=INT_MAX;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int  i=0;i<N;i++){
        idx[i]=-1;
    }

    for(int  i=0;i<n;i++){
        if(idx[arr[i]] !=- 1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else 
        {
            idx[arr[i]] = i;
        } 
    }

    if(minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<< minidx+1 <<endl;
    }
}

int main(){

    fastio

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // ll T = 1 ;
    // cin >> T ;
   

    //   ll x = 1 ; 
    //   while( x < = T ){
        solve();
    //     x++;
    //   }
    
    return 0;
}