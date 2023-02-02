//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=616

#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);
	int N; cin >> N; int nums[N];
	for (int i=0; i<N; i++) {
		cin >> nums[i];
	}
	int mini=INT32_MAX; 
	for (int i=0; i<N; i++) {
		int suma=0; int c = 0; int p=0;
		for (int j=i; j<N; j++) {
			c++;
			
			if (c==N+1) break;
			if (j==N-1 && c!=N) {
				//cout << nums[j] << "*" << p<<"\n";
				suma += nums[j]*p;
				p++;
				j=-1;
			} else {
				//cout << nums[j] << "*" << p<<"\n";
				suma += nums[j]*p;
				p++;
			}
		}
		//cout << "suma: " <<suma << "\n";
		mini = min(suma,mini);
	}
	cout << mini;
	return 0;
}


