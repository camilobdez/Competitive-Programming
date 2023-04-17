#include <bits/stdc++.h>


using namespace std;


int main() {
	int N; string S;
	cin >> N >> S;
	int comillas =0;
	bool beg = false;

	for (int i=0; i<N; i++) {
		if (S[i]=='"' && !beg) {
			beg = true;
		} else if (S[i]=='"' && beg) {
			beg = false;
		}
		if (S[i]==',' && !beg) {
			S[i] = '.';
		}
	}
			
	cout << S;
	
	
	return 0;
}
