#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
 
	for (int k=0; k < t; k++) {
	int n, s, s1;
 
	cin >> n >> s >> s1;
 
	int max = s-s1;
 
	int arr[n]{};
 
	for (int i=0; i<n;i++) {
		arr[i]=max;
	}
 
	int suma = max*n;
	int i=1;
	while (suma!=s) {
		if (i==n) i=1;
		arr[i]--;
		suma--;
		i++;
	}
 
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	}
	
	return 0;
}
