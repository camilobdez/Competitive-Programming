#include <bits/stdc++.h>
using namespace std;
 
void solve() {
 
	int n, neg=0, cero=0, minn=1e9;
	cin >> n;
	long long sa=0;
 
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		sa += abs(a);
		minn = min(minn, abs(a));
		neg += a<0;
		cero += a==0;
	}
 
	cout << sa - 2*minn*!(cero || !(neg%2)) << endl;
 
}
 
int main() {
 
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
