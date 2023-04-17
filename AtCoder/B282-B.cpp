#include <bits/stdc++.h>


using namespace std;


int main() {
	int N, M;
	cin >> N >> M;

	char a[N][M];
	for (int i=0; i<N;i++){
		for (int j=0; j<M; j++) {
			cin >> a[i][j];
		}
	}

	int pairs = 0;
	for (int i=0; i<N; i++) {
		for (int j=i+1; j<N; j++) {
			bool actual = true;
			for (int p=0; p<M; p++) {
				if (a[i][p] == 'x' && a[j][p] == 'x') {
					actual = false;
					break;
				}
			}
			if (actual) {
				pairs++;
			}
		}
	}
	cout << pairs;
	
	
	return 0;
}
