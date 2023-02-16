//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=736
#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	
	int N, M; 
	
	cin >> N >> M;

	char spot[N][M];
	char plain[N][M];

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> spot[i][j];
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> plain[i][j];
		}
	}

	int out=0;
	
	for (int i=0; i<M; i++) {
		int row=0;
		bool l2=false;
		//cout << spot[row][i] << endl << plain[row][i] << endl;
label2:
		if (spot[row][i]==plain[row][i]) {
			continue;
		}

		for (int j=0; j<N; j++) {
			//cout << spot[row][i] << endl << plain[row][i] << endl;
			if (spot[row][i]==plain[j][i]) {
				goto label;
			}
		}
		l2=true;
		if (row+1 <N) {
			row++;
			goto label2;
		} else {
			out++;
		}

label:
		int o=1;
	}

	cout << out <<endl;

	return 0;
}
