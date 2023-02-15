//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=736
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	
	int n, m; 
	
	cin >> n >> n;

	char spot[n][m], plain[n][m];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> spot[i][j];
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> plain[i][j];
		}
	}

	int out=0;
	
	for (int i=0; i<m; i++) {
		int row=0;
		bool l2=false;
		//cout << spot[row][i] << endl << plain[row][i] << endl;
label2:
		if (spot[row][i]==plain[row][i]) continue;
		
		for (int j=0; j<N; j++) {
			//cout << spot[row][i] << endl << plain[row][i] << endl;
			if (spot[row][i]==plain[j][i]) goto label;
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
