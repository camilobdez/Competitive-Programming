//link: https://codeforces.com/gym/102951/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n, maximo=0;
	cin >> n;
 
	int xc[n], yc[n];
 
	for (int i=0; i < n; i++) {
		cin >> xc[i];
	}
 
	for (int i=0; i < n; i++) {
		cin >> yc[i];
	}
 
	for (int i=0; i < n-1; i++) {
		for (int j=i+1; j < n; j++) {
			int distance = pow(xc[i]-xc[j], 2) + pow (yc[i]-yc[j], 2);
			maximo = max(distance, maximo);
		}	
	}
  
	cout << maximo << endl;
	return 0;
}
