// Write a program to find the count of numbers that consists of unique digits.
// Input:
// Input consists of two Integer lower and upper value of a range
// Output:
// The output consists of a single line, print the count of unique digits in a given range. Else Print”No Unique Number“.

#include <bits/stdc++.h>
using namespace std;

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void printUnique(int l, int r)
{
  int count = 0;
  // Iterate from l to r
  for (int i = l; i <= r; i++)
  {

    // Convert the no. to
    // string
    string s = to_string(i);

    // Convert string to set using stl
    set<int> uniDigits(s.begin(), s.end());

    // Output if condition satisfies
    if (s.size() == uniDigits.size())
    {
      count++;
    }
  }
  cout << count;
}

void solve()
{
  int l, r;
  cin >> l >> r;
  printUnique(l, r);
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