//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=891
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	int n, a, b, g;
	int pa=0; int pb=1; int pc=2;
	cin >> n;
	int arr2[3]{0, 0, 0};
	for (int i=0; i<n; i++) {
		cin >> a >> b >> g;
		int temp;
		if (a==1) {
			temp = pa;
			if (b==2) {
				pa = pb;
				pb = temp;
			} else {
				pa = pc;
				pc = temp;
			}
		} else if (a==2) {
			temp = pb;
			if (b==1) {
				pb = pa;
				pa = temp;
			} else {
				pb = pc;
				pc = temp;
			}
		} else {
			temp = pc;
			if (b==1) {
				pc = pa;
				pa = temp;
			} else {
				pc = pb;
				pb = temp;
			}
		}
		if (g == 1) {
			arr2[pa] += 1;
		} else if (g == 2) {
			arr2[pb] += 1;
		} else {
			arr2[pc] += 1;
		}
	}
	cout << *max_element(arr2, arr2 + 3);
	return 0;
}
