#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; 
	
	cin >> T;
	
	for (int i=0; i < T; i++) {
		int N;

		cin >> N;

		int arr[N];

		int suma=0;
		int maximo=0;
		int minimo=1000000;
		int ans=0;

		for (int j=0; j <N; j++) {
			cin >> arr[j];
			if (arr[j] > maximo) {
				maximo = arr[j];
			}

			if (minimo > arr[j]) {
				minimo = arr[j];
			}
			suma += arr[j];

		}

		if (minimo==maximo) {
			ans=0;
		} else {
			int k=0;
			for (int j=0; j<N; j++) {
				cout << "maximo" << maximo << endl;
				cout << "k" << k << endl;
				if (ans==N-1) {
					break;
				} else if (arr[j]==maximo) {
					if (j!=0 && k!=0) {
						goto label;
					}
				} else if (j+1 < N && k==0 && arr[j]+arr[j+1]==maximo) {
					ans++;
					j++;
				} else if (j+1 < N && k==0 && arr[j]+arr[j+1]<maximo) {
					k += arr[j]+arr[j+1];
					ans++;
					j++;
					if (j+1==N) {
						goto label;
					}
				} else if (j!=N-1 && k+arr[j]<maximo) {
					k += arr[j];
					ans++;
				} else if (k+arr[j]==maximo) {
					ans++;
					k=0;
				} else {
label:
					ans=0;
					int maximo1=0;
					int w=0;
					while (maximo>=maximo1) {
						maximo1 += arr[w];
						w++;
					}
					maximo=maximo1;
					k=0;
					j=-1;
				}
			}
		}

		cout << ans << endl;
		
	}

	return 0;
}
