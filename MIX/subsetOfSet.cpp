
// Write a program to generate all possible subsets of a set
// {1,2,3}
// 1 
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3 

#include <bits/stdc++.h>
using namespace std;

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void subsets(int arr[], int n)
{
  for (int i = 1; i < (1 << n); i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        cout << arr[j] << " ";
      }
    }
    cout << endl;
  }
}

void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  subsets(arr, n);
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