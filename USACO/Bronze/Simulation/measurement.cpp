#include <bits/stdc++.h>


using namespace std;


int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);
	
	int n;
	cin >> n;
	int c=0;
	int arr[3][101]{{0}};
	for (int i=0; i < n; i++) {
		int d; cin >> d;
		string s; cin >> s;
		if (s=="Mildred") {
			cin >> arr[2][d];
		} else if (s=="Elsie") {
			cin >> arr[1][d];
		} else {
			cin >> arr[0][d];
		}
	}
    arr[0][0]=7;
	arr[1][0]=7;
	arr[2][0]=7;
	bool bmax = true;
	bool emax = true;
	bool mmax = true;
	int maximo = 7;
	for (int i=1; i < 101; i++) {
		if (arr[0][i]!=0) {
			arr[0][i] += arr[0][i-1];
		} else if (arr[1][i]!=0) {
			arr[1][i] += arr[1][i-1];
		} else if (arr[2][i]!=0) {
			arr[2][i] += arr[2][i-1];
		}

		if (arr[0][i]==0) {
			arr[0][i] = arr[0][i-1];
		} 
		if (arr[1][i]==0) {
			arr[1][i] = arr[1][i-1];
		} 
		if (arr[2][i]==0) {
			arr[2][i] = arr[2][i-1];
		}
		int b = arr[0][i]; int e = arr[1][i]; int m = arr[2][i]; 
		maximo = max(b, e);
		maximo = max(maximo, m);
		if ((bmax && b!=maximo) || (!bmax && b==maximo) || (emax && e!=maximo) || (!emax && e==maximo) || (mmax && m!=maximo) || (!mmax && m==maximo)  ) {
			c++;
		}
		if (bmax && b!=maximo) {
			bmax = false;
		} else if (!bmax && b==maximo) {
			bmax = true;
		}

		if (emax && e!=maximo) {
			emax = false;
		} else if (!emax && e==maximo) {
			emax = true;
		}

		if (mmax && m!=maximo) {
			mmax = false;
		} else if (!mmax && m==maximo) {
			mmax = true;
		}

	}
	cout << c << endl;
	
	
	return 0;
}
