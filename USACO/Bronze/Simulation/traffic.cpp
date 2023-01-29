//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=917
#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("traffic.in", "r", stdin);
	//freopen("traffic.out", "w", stdout);
	int N; cin >> N;
	string t[N]; int r[N][2];
	int a1=-99999; int a2=999999; int d1=-99999; int d2=999999;

	for (int i=0; i<N; i++) {
		string s; cin >> s; 
		t[i]=s;
		int a, b; cin >> a >> b; 
		r[i][0]=a; r[i][1]=b;
	}
	
	for(int i=N-1; i>=0; i--) {
		int a=r[i][0];
		int b=r[i][1];
		if (t[i]=="none") {
			a1 = max(a1, a);
			a2 = min(a2, b);
		} else if (t[i]=="on") {
			a1 -= b; a2 -= a;
		} else {
			a1 += a; 
			a2 += b;
		}
		a1=max(a1,0);
		a2=max(a2,0);

	}

	for (int i=0; i<N; i++) {
		int a=r[i][0]; int b=r[i][1];
		if (t[i]=="none") {
			d1 = max(d1, a);
			d2 = min(d2, b);
		} else if (t[i]=="on") {
			d1 += a;
			d2 += b;
		} else {
			d1 -= b;
			d2 -= a;
		}
		d1=max(d1,0);
		d2=max(d2,0);

	}


	cout << max(0, a1) << " " << (a2)<< "\n";
	cout << d1 << " " << d2<< "\n";

	return 0;
}
