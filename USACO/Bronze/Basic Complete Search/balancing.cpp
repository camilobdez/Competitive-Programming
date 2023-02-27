#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("balancing.in", "r", stdin);
	freopen("balancing.out", "w", stdout);
	
	int N, B; 
	
	cin >> N >> B;
	
	int x_vals[N], y_vals[N];

	set<int> vfence;
	set<int> hfence;

	for (int i=0; i < N; i++) {
		cin >> x_vals[i] >> y_vals[i];
		vfence.insert(x_vals[i]+1);
		hfence.insert(y_vals[i]+1);
	}

	int minimo=N;

	for (int v: vfence) {
		for (int h: hfence) {

			int t1 = 0, t2=0, t3=0, t4=0;
			
			for (int c = 0; c < N; c++) {
				if (x_vals[c] < v && y_vals[c] > h) {
					t1++;
				} else if (x_vals[c] > v && y_vals[c] > h) {
					t2++;
				} else if (x_vals[c] < v && y_vals[c] < h) {
					t3++;
				} else if (x_vals[c] > v && y_vals[c] < h){
					t4++;
				}
			}

			minimo = min(minimo, max({t1, t2, t3, t4}));

		}

	}

	cout << minimo << endl;

	return 0;
}
