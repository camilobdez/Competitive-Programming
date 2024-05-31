#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
typedef long double     ld;

#define pb              push_back
#define ff              first
#define ss              second
#define sz(x)           int(x.size())
#define all(x)          x.begin(), x.end()
#define rall(x)         x.rbegin(), x.rend()


void solve() {
    string n; int s, c=0;
    cin >> n >> s;
    ll o = stoll(n);
    for (int i=0; i<sz(n); i++) {
        int x = n[i]-'0';
        if (c+x > s) {
            ll y = 0;
            if (i > 0) y = stoll(n.substr(0, i));
            y++;
            string z(sz(n)-i, '0');
            n = to_string(y)+z;
            c = 0;
            i = -1;
        } else {
            c += n[i]-'0';
        }
    }
    cout<< abs(o-stoll(n))<< "\n";
}

int main() {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}