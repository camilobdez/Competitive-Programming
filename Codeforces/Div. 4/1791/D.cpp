#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n; cin >> n;
	int arr[n]{};
	char string[n];
	map<char, vector<int>> m;
	int maximo=0, index=0;
 
	for (int i=0; i < n; i++) {
		char c; cin >> c;
		m[c].push_back(i);
		string[i] = c;
		int s = m[c].size();
		if (s>1) {
			for (int j=m[c][s-2]+1*(s>2); j<= m[c][s-1]; j++) {
				arr[j]++;
				maximo = max(maximo, arr[j]);
				index = max(index, j*(arr[j]>=maximo));
			}
		}		
	}
	
	int nu=0; set<char> u;
		
	for (int i=0; i<n; i++) {
		if (i==index) u.clear();
		if (u.find(string[i])==u.end()) {
			u.insert(string[i]);
			nu++;
		}
	}
 
	cout << nu << endl;
	
}
 
int main() {
	
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
