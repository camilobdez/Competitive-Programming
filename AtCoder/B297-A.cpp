#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int h, w;
	cin >> h >> w;
	
	while (h--) {
	    string s;
	    cin >> s;
	    for (int i=0; i<s.size()-1; i++) {
	        if (s[i]=='T' && s[i+1]=='T')  {
	            s[i]='P';
	            s[i+1]='C';
	            i++;
	        }
	    }
	    cout << s << endl;
	}
 
	return 0;
}
