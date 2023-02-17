#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, q;
	cin>>n>>q;
	string lm[8] = 
	{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	
	string codes[n];
	map<string,int> m;
 
	for (int i=0; i<n; i++) {
		string s; cin >> s;
		for (int j=0; j<s.size(); j++) {
			for (int k=0; k<8; k++) {
				bool f=false;
				for (int u=0; u<lm[k].size(); u++) {
					if (s[j]==lm[k][u]) {
						codes[i]+=to_string(k+2);
						f=true;
						break;
					}
				}
				if (f) break;
			}
		}
		m[codes[i]]++;
		//cout << codes[i] << endl;
	}
 
	for (int i=0; i<q; i++) {
		string s; cin >> s;
		cout << m[s] << endl;
	}
 
	return 0;
}
