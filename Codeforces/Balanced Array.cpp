#include <bits/stdc++.h>
using namespace std;

/*
  John Watson
  Handle codeforces : quangminh98

  Mua Code nhu mua Florentino !!
*/

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
    int n; cin >> n;

    if (n % 4 != 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    n /= 2;
    for (int i = 1; i <= n; i++) cout << 2 * i << ' ';
    for (int i = 1; i < n; i++) cout << 2 * i - 1 << ' ';
    cout << 3 * n - 1 << '\n';
}
