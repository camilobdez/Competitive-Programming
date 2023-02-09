#include <bits/stdc++.h>
using namespace std;

int inter_area(int s1[4], int s2[4]) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	return (
		(min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) 
		* (min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y))
	);
}

int area(int bl_x, int bl_y, int tr_x, int tr_y) {
	int length = tr_y - bl_y;
	int width = tr_x - bl_x;
	return length * width;
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	int r1[4] = {x1, y1, x2, y2};

	int r2[4] = {x3, y3, x4, y4};
	
	int a1 = area(x1,y1,x2,y2);

	if ((y2 <= y4 && y1 >= y3 && ((x1 >= x3 && x1 <= x4) || (x2 >= x3 && x2 <= x4) )) || 
			(x2 <= x4 && x1 >= x3 && ((y1 >= y3 && y1 <= y4) || (y2 >= y3 && y2 <= y4) ))) {
		a1 -= inter_area(r1,r2);
	} 
	
	cout << a1;
	return 0;
}
