//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=665
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	int M, N, K;
	cin >> M >> N >> K;
	string x[M][K*N];
	for (int i=0; i<M; i++) {
		for (int j=0; j<N;j++){
			char c; cin >> c;
			for (int k=0; k<K; k++) {
				x[i][K*j+k]=c;
			}
		}
	}
	for (int i=0; i<M; i++) {
		for (int j=0;j<K;j++) {
			for (int p=0;p<K*N;p++) {
				cout << x[i][p];
			}
			cout << "\n";
		}
	}
	return 0;
}
