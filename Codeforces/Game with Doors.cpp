#include<bits/stdc++.h>

using namespace std;

#define ll long long

string name = "test";

void solve();
signed main()
{
    if (fopen((name + ".inp").c_str(), "r"))
    {
        freopen((name + ".inp").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) solve();

    return 0;
}

// main program
void solve()
{
	int l, r, L, R; cin >> l >> r >> L >> R;
	
	if (l > R || r < L)
		cout << 1 << '\n';
	else
	{
		if (l > L) swap(L, l), swap(R, r);
		if (l <= L && R <= r)
			cout << (R - L) + (l < L) + (R < r);
		else
		if (l <= L && L <= r)
			cout << (r - L) + (r < R) + (l < L);
		
		cout << '\n';
	}
}

