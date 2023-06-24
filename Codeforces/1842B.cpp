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
		int n, x, u=0;
		cin >> n >> x;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			int ai; cin >> ai;
			a.push_back(ai);
		}
		vector<int> b;
		for (int i = 0; i < n; ++i) {
			int ai; cin >> ai;
			b.push_back(ai);
		}
		vector<int> c;
		for (int i = 0; i < n; ++i) {
			int ai; cin >> ai;
			c.push_back(ai);
		}

		string ans;
		int i1=0, i2=0, i3=0;

		while (u != x) {
			if (i1<n && ((x & a[i1])==x || (x & a[i1])==a[i1]) && x >= a[i1]) {
				u = u | a[i1];
				i1++;
			} else if (i2<n && ((x & b[i2])==x || (x & b[i2])==b[i2]) && x >= b[i2]) {
				u = u | b[i2];
				i2++;
			} else if (i3<n && ((x & c[i3])==x || (x & c[i3])==c[i3]) && x >= c[i3]) {
				u = u | c[i3]; 
				i3++;
			} else {
				ans = "No";
				break;
			}
		}
    
		if (u==x) ans = "Yes";
		cout << ans << endl;
    
	}
	
}
