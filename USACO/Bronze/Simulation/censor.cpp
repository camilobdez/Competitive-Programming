#include <bits/stdc++.h>


using namespace std;


int main() {
	freopen("censor.in", "r", stdin);
	freopen("censor.out", "w", stdout);
	
	string s;
	string t;
	cin >> s >> t;
	string c="";
	int n = s.size();
	int i=0;
	while (i < s.size()) {
		c += s[i];
		
		if (c.size() > t.size() && c.substr(c.size()-t.size(), t.size())==t) {
			c.erase(c.size()-t.size(), t.size());
		}
		i++;
	}
	cout << c << endl;
	
	
	return 0;
}
