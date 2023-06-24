//CAMILOOOSADASAS JODEEER

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
		cin >> n >> m;
		vector<int> a;
		for (int i=0; i<n; i++) {
			int an; cin >> an;
			a.push_back(an);
		}
		vector<int> b;
		for (int i=0; i<m; i++)  {
			int bn; cin >> bn;
			b.push_back(bn);
		}
		sort(a.begin(), a.end(), greater<int>());
		sort(b.begin(), b.end(), greater<int>());

		int j=0;

		int maxa = a[0];
		int maxb = b[0];

		while (maxa > 0 && maxb > 0) {
			if (j%2==0) {
				int temp = a[0];
				a[0] -= b[m-1];
				b[m-1] -= temp;
				if (a[0] <= 0) {
					a.erase(a.begin());
					n--;
				}
				if (b[m-1] <= 0) {
					b.pop_back();
					m--;
				}
			} else {
				int temp = b[0];
				b[0] -= a[n-1];
				a[n-1] -= temp;
				if (b[0] <= 0) {
					b.erase(b.begin());
					m--;
				}
				if (a[n-1] <= 0) {
					a.pop_back();
					n--;
				}
			}
			sort(a.begin(), a.end(), greater<int>());
			sort(b.begin(), b.end(), greater<int>());
			j++;
			maxa = a[0];
			maxb = b[0];
		}

		if (maxa > 0) {
			cout << "Tsondu" << endl;
		} else if (maxb > 0) {
			cout << "Tenzing" << endl;
		} else {
			cout << "Draw" << endl;
		}

	}
}
