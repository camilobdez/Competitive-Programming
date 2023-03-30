#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);

	int n; 
	cin >> n;
	string a, b;
	cin >> a >> b;

	int out=0, as=1;

	for (int i=0; i<n; i++) {
		if (a[i]!=b[i]) {
			if (as) {
				out++;
				as=0;
			}
		} else {
			as=1;
		}
	}

	cout << out << endl;
	
	return 0;
}
