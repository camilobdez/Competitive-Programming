#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	int N;
	cin >> N;
	int v[N][3];
	int time[1000]{};
	for (int i=0; i<N; i++) {
		int s, t, b; cin >>s>>t>>b;
		v[i][0]=s; v[i][1]=t; v[i][2]=b;
		for (int j=s; j <= t; j++) {
			time[j]+=b;
		}
	}   
	cout << *max_element(time, time+1000);
	return 0;
}

