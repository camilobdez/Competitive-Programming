//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=567

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((a >= c && a <= d) || (c >= a && c <= b) || (b >= c && b <= d) || (d >= a && d <= b)) {
		cout << max(b,d) - min(a,c);
	} else {
		cout << (b-a) + (d-c);
	}
	
	return 0;
}
