//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=760
#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int N; cin >> N;
	int shuffle[N];
	int ids[N];
	for (int i=0; i<N;i++) {
		int a; cin >> a;
		shuffle[i] = a;
	}

	for (int i=0; i<N;i++) {
		int a; cin >> a;
		ids[i] = a;
	}
	int Nids[N];
	for (int i=0; i<3; i++) {
		for (int j=0; j<N; j++) {
			int temp1 = ids[shuffle[j]-1];
			Nids[j] = temp1;
		}
		for (int j=0; j<N; j++) {
			ids[j]=Nids[j];
		}
	}

	for (int i=0; i<N; i++) {
		cout << ids[i] << "\n";
	}
	return 0;
}
