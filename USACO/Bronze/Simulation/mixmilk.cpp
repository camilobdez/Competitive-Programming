#include <cstdio>
#include <iostream>
using namespace std;


int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	long long c1, m1, c2, m2, c3, m3, temp;
	cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
	int uno=1; int dos=2; int tres=3;
	for (int i=1; i <=100; i++) {
		if (i==uno) {
			if (m2 ==c2) {
				m1=m1;
			} else if (c2>=m2+m1) {
				temp = m1;
				m1 =0;
				m2 += temp;
			} else if (c2 < m2+m1) {
				m1 = abs(m1-(c2-m2));
				m2 = c2;
			}
			uno +=3;
		} else if (i==dos) {
			if (m3 ==c3) {
				m2=m2;
			} else if (c3>=m2+m3) {
				temp = m2;
				m2 =0;
				m3 += temp;
			} else if (c3 < m2+m3) {
				m2 = abs(m2-(c3-m3));
				m3 = c3;
			}
			dos +=3;
		} else {
			if (m1 ==c1) {
				m3=m3;
			} else if (c1>=m1+m3) {
				temp = m3;
				m3 =0;
				m1 += temp;
			} else if (c1 < m1+m3) {
				m3 = abs(m3-(c1-m1));
				m1 = c1;
			}

		}
		
	}
	cout << m1 << "\n" << m2 << "\n" << m3;
}
