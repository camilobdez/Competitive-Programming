#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin >> s;
	bool con1 = false;
	bool con2 = true;
	int p1=-1, p2=-1, rs=0;
	for (int i=0; i<8; i++) {
	    if (s[i]=='B' && p1==-1) {
	        p1=i;
	    } else if (s[i]=='B') {
	        p2=i;
	    }
	    if (s[i]=='R') {
	        rs++;
	    }
	    if (s[i]=='K') {
	        if (rs==0 || rs==2) {
	            con2 =false;
	        }
	    }
	}
	
	if ((p1%2==0 && p2%2==0) || (p1%2!=0 && p2%2!=0)) {
	    con1 = false;
	} else {
	    con1= true;
	}
	
	if (con1 && con2) {
	    cout << "Yes";
	} else {
	    cout << "No";
	}
  
	return 0;
}
