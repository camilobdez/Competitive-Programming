//link: http://www.usaco.org/index.php?page=viewproblem2&cpid=735
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x, y;
	cin >> x >> y;
	int d=0; int nPos=x; int k=1; int X=x;
	while (x!=y) {
		nPos = X + k;
		if ((nPos>y && x<y) || (x>y && nPos<y)) {
			d += abs(y-x);
			break;
		}
		d += abs(nPos-x);
		x = nPos;
		k *= -2;
	}
	cout << d;
	return 0;
}

