//CAMILOOOSADASAS
 
#include <bits/stdc++.h>
using namespace std;
 
void init_code() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}
 
int main() {
	//init_code();
	int n, k;
	cin >> n >> k;
 
	int vi = 1;
	int vd = 1e9;
	int v;
 
	while (vi < vd) { 
		int vm = (vi + vd)/2;
		v = vm;
		int s = 0;
 
		while (v) {
			s += v;
			v /= k;
		}
 
		if(s >= n) {
			vd = vm; 
		} else {
			vi = vm + 1;
		}
	}
 
	v = vi;
 
	cout << vi << endl;
 
	return 0;
}
