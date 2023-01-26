#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	int N, M;
	cin >> N >> M;
	pair<int,int> roads[N]; pair<int,int> bes[M];
	for (int i=0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		roads[i] = {a,b};
		
	}
	for (int i=0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		bes[i] = {a,b};
	}
	int dif=0;
	int i=0;int j=0;
	pair <int,int>a=roads[i];pair<int,int> b = bes[i];int tA = a.first;int tB = b.first;
	while (tA<=100 && tB<=100) {
		
		if (b.second - a.second > dif) {
			dif = b.second - a.second;
		}
		
		if (tA == 100 && tB==100) {
			break;
		} else if (tA>tB) {
			i++;
			b = bes[i];
			tB += b.first;
		} else if (tB>tA) {
			j++;
			a = roads[j];
			tA += a.first;
		} else {
			i++;j++;
			a=roads[j];b=bes[i];
			tA += a.first; tB += b.first;
		}
	}
	cout << dif;

	return 0;
}
