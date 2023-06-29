#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void init_code() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	//init_code();
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		long long a=0, b=0;
		cin >> n >> m;
		for (int i=0; i<n; i++) {
			int an; cin >> an;
			a += an;
		}
		for (int i=0; i<m; i++)  {
			int bn; cin >> bn;
			b += bn;
		}

		cout << (a > b ? "Tsondu" : (b > a ? "Tenzing" : "Draw")) << "\n";

	}
}
