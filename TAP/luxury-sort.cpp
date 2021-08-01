
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long
#define lli long long int
ll mod = 1e9 + 7;

bool compare(int a, int b)
{
        return b < a;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> e, f, o;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
            e.push_back(temp);
        else if (temp % 5 == 0)
            f.push_back(temp);
        else
            o.push_back(temp);
    }

    sort(e.begin(), e.end(), compare);

    sort(f.begin(), f.end());
    for(int i=0;i<e.size();i++)
    cout<<e[i]<<" ";
    for(int i=0;i<f.size();i++)
    cout<<f[i]<<" ";
    for(int i=0;i<o.size();i++)
    cout<<o[i]<<" ";
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