#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define mp make_pair

const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};

void solve() {
	int n, k, a;
	cin >> n >> k;
	map<int,set<int>, greater<int>> mapa;
	for (int i=1; i<=n; i++) {
		cin >> a;
		int times = (int) ceil((double) a/k);
		a = a - k*(times-1);
		mapa[a].insert(i);
	}
	
	for (auto i: mapa) {
		for (auto j: i.se) {
			cout << j << " ";
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	for (int i=0; i<tt; i++) {
		//cout << "Case #" << (i+1)<< ": ";
		solve();
	}
}
