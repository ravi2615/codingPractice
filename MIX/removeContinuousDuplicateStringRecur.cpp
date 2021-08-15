
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

const long long MAX_SIZE = 1000001;
bool prime[1000000 + 1];

string removeDup(string s)
{
    if (s.length() == 0)
        return "";

    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if (ch == ans[0])
        return ans;
    return ch + ans;
}
void solve()
{
    string s;
    cin >> s;
    cout << removeDup(s);
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