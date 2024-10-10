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

    int t = 1;
    while (t--) solve();

    return 0;
}

// main program

void solve()
{
    int n; cin >> n;
    ll x; cin >> x;
    int num = 0;

    while (n--)
    {
        char c; cin >> c;
        ll d; cin >> d;

        if (c == '+')
            x += d;
        else
        if (d > x)
            num++;
        else
            x -= d;
    }

    cout << x << ' ' << num << '\n';
}

