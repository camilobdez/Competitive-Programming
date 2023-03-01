//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=712

#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("circlecross.in", "r", stdin);
	//freopen("circlecross.out", "w", stdout);
	
	string S;
	
	cin >> S;

	int out=0;

	for (int a = 0; a < S.size(); a++) {
		for (int b =a+1; b < S.size(); b++) {
			for (int c=b+1; c < S.size(); c++) {
				for (int d=c+1; d < S.size(); d++) {
					if (S[a]==S[c] && S[b]==S[d]) {
						out++;
					}
				}
			}
		}
	}
	cout << out <<endl;

	return 0;
}
