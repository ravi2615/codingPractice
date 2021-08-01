
// Problem
// Challenge-SubarrayWithGivenSum
// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.
// Constraints
// 1 <= N <= 105
// 0 <= Ai <= 1010
// Example
// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements from 2nd position to 4th position is 12.

#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define lli long long int

void solve(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int i = 0, j = 0, st = -1, e = -1, sum = 0;
    while(j < n && arr[j] + sum <= s ){
        sum += arr[j];
        j++;
    }
    if(sum == s){
        cout<< i+1 << " " << j+1 <<endl;
        return;
    }

    while(j < n){
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if(s = sum){
            st = i + 1;
            e = j +1;
            break;
        }
        j++;
        
    }

    cout<< st << " " << e <<endl;

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