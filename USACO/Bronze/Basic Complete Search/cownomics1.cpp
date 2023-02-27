#include <bits/stdc++.h>
using namespace std;

int valorNum(char q) {
	int o = 0;
	if (q=='A') {
		o = 1;
	} else if (q=='C') {
		o = 2;
	} else if (q=='G') {
		o = 3;
	} else if (q=='T') {
		o = 4;
	}
	return o;
}

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
	
	for (int a=0; a < M; a++) {
		for (int b=a+1; b<M; b++) {
			for (int c=b+1; c<M; c++) {
				bool sirve=true;
				int valids[2000]{};
				//cout << "NEW PAIR " << endl;
				for (int d=0; d < N; d++) {
				   	int total = ((valorNum(spot[d][a])*19) 
							+ (valorNum(spot[d][b])*100)
							+ (valorNum(spot[d][c])*3));
					//cout << spot[d][a] << spot[d][b] << spot[d][c] << ": " << total << endl;
					valids[total]=1;
				}

					
				for (int e=0; e<N; e++) {
					int t = ((valorNum(plain[e][a])*19) 
							+ (valorNum(plain[e][b])*100)
							+ (valorNum(plain[e][c])*3));
					//cout << plain[e][a] << plain[e][b] << plain[e][c] << ": " << t << endl;

					if (valids[t]==1) {
						sirve = false;
						break;
					}

				}
				//cout << "SIRVE: " << sirve << endl << endl;
				out += sirve;
			}
		}
	}
	cout << out <<endl;

	return 0;
}
