#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long a, b, c=0;
	cin >> a >> b;
	while (a!=b) {
	    if (a%b==0 || b%a==0) {
	        c += max(a/b, b/a);
	        break;
	    } else {
	        if (max(a,b)/min(a,b)>=2) {
	            long long g = max(a, b), p = min(a, b), d=g/p;
	            g -= p*d, a = g, b = p, c+=d;
	        } else {
	            if (a > b) a -= b;
	            else b -= a;
	            c++;
	        }
	    }
	}
	if (c-1>=0) c--;
	else c=0;
	
	cout << c;

	return 0;
}
