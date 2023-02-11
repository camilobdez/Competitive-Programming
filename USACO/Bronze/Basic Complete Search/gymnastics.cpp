#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	
	int N, K; 
	
	cin >> N >> K;

	int nums[N][K]{};

	for (int i=0; i<N; i++) {
		for (int j=0; j<K; j++) {
			cin >> nums[i][j];
		}
	}

	int con = 0;

	for (int i=0; i<K-1; i++) {
		for (int j=i+1; j<K; j++) {
			bool consistent=true;
			int a = nums[0][i];
			int b = nums[0][j];
			bool  la=false;
			for (int l=1; l<N; l++) {
				for (int p=0; p<K; p++) {
					if (nums[l][p]==a) {
						la=true;
						goto label;
					} else if (nums[l][p]==b){
						consistent=false;
						goto label2;
					}
				}
label:
				if (la) {
									}
			}
label2:
			if (consistent) {
				con++;
			}

		}
	}


	cout << con <<endl;

	return 0;
}
