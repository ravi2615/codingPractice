
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
    lli n;
    cin >> n;
    lli arr[n];

    vector<lli> even, odd;
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    lli x = even.size();
    lli y = odd.size();
    lli i=0;
    int oddI = 0, evenI = 0;
    
    if (y > x) {
		int j = y - x;
		//cout << j << endl;
		for (; oddI < j; oddI++) {
			cout << odd[oddI] << " ";
		}
		for (; evenI < x; evenI++, oddI++) {
			cout << even[evenI] << " ";
			cout << odd[oddI] << " ";
		}
	}
	else {
		int j = x - y;
		int c = 0;
		while (c != j) {
			cout << even[evenI++] << " ";
			c++;
		}
		for (; oddI < y; evenI++, oddI++) {
			cout << even[evenI] << " ";
			cout << odd[oddI] << " ";
		}
	}
    cout<<endl;
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