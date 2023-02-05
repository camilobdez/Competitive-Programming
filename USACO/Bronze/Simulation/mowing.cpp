#include <bits/stdc++.h>


using namespace std;


int main() {
	freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);
	int g[2000][2000]{};
	int N; 
	cin >> N;
	int x=INT_MAX;
	int k=1;
	int p=500;
	int q=500;
	for (int i=0; i<N; i++) {
		char D; int S;
		cin >> D >> S;

		if (D=='N') {
			for (int j=0; j<S; j++) {
				if (g[p][q]!=0) {
					x = min(x, k-g[p][q]);
				}
				g[p][q]=k;
				k++;
				p--;
			}
		} else if (D=='S') {
			for (int j=0; j<S; j++) {
				if (g[p][q]!=0) {
					x = min(x, k-g[p][q]);
				}
				g[p][q]=k;
				k++;
				p++;
			}
		} else if (D=='E') {
			for (int j=0; j<S; j++) {
				if (g[p][q]!=0) {
					x = min(x, k-g[p][q]);
				}
				g[p][q]=k;
				k++;
				q++;
			}
		} else if (D=='W') {
			for (int j=0; j<S; j++) {
				if (g[p][q]!=0) {
					x = min(x, k-g[p][q]);
				}
				g[p][q]=k;
				k++;
				q--;
			}
		}



	}
	if (x==INT_MAX) {
		cout << -1;
	} else {
		cout << x;
	}
				
	
	return 0;
}
