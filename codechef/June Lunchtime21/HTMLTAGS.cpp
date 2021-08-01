
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

void solve()
{
    string s;
    int f = 0;
    cin >> s;
    ll N = s.size();
    if (s[0] == '<' && s[1] == '/' && s[N - 1] == '>')
        f = 1;
    for (int i = 2; i < N - 1; i++)
    {
        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        f=1;
        else
        {
            f=0;
            break;
        }
    }

    if(f!=0)
    cout<<"success"<<endl;
    else
    cout<<"error"<<endl;
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