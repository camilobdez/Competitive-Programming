//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=759

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4>> x5 >> y5 >> x6 >> y6;

	int r = (x2-x1)*(y2-y1)-max(max(min(x6, x2) - max(x1, x5),0)*max(min(y2,y6)-max(y1,y5),0),0) +
		abs((x4-x3)*(y4-y3))-max(max(min(x6, x4) - max(x3, x5),0)*max(min(y4,y6)-max(y3, y5),0),0);

	if (r < 0) r = (x2-x1)*(y2-y1)+(x4-x3)*(y4-y3);
	
	cout << r << endl;

	return 0;
}
