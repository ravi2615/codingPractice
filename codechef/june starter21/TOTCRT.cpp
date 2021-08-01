
#include <bits/stdc++.h>
using namespace std;

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

bool cmp(pair<string,int>&a,pair<string,int>&b)
{
    return a.second < b.second;
}

void Msort(map<string,int> &M){
  vector<pair<string, int>> A;
  for(auto &it:M){
    A.push_back(it);
  }
  sort(A.begin(),A.end(),cmp);
  for(auto &it: A){
    cout<<it.second<<" ";
  }
  cout<<endl;
}

void solve()
{
  lli n;
  cin >> n;
  n = n * 3;
  map<string, int> M;
  vector<int> v;
  while (n--)
  {
    string s;
    lli c;
    cin >> s >> c;
    map<string, int>::iterator it = M.find(s);
    if(it==M.end()){
      M.insert({s,c});
    }else{
      it->second+=c;
    }
    }
    Msort(M);
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