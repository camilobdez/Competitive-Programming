#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("lineup.in", "r", stdin);
	//freopen("lineup.out", "w", stdout);
    string c[8]={"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(c, c+8);
    map<string, vector<string>> m;
    int n; cin >> n;
    while (n--) {
        string c1, t1, t2, t3, t4, c2;
        cin >> c1 >> t1 >> t2 >> t3 >> t4 >> c2;
        m[c1].push_back(c2);
        m[c2].push_back(c1);
    }
    
    vector<string> o;
    
    for (int i=0; i<8; i++) {
        if ((m.find(c[i]) == m.end() || (m[c[i]].size()<=1)) && (find(o.begin(), o.end(), c[i]) == o.end())) {
            o.push_back(c[i]);
            if (m[c[i]].size()==1) {
                string p = c[i];
                string s = m[c[i]][0];
                while (m[s].size()==2) {
                    o.push_back(s);
                    string s1 = m[s][0]; 
                    string s2 = m[s][1];
                    string at = s1 == p ? s2 : s1;
                    p = s;
                    s = at;
                }
                o.push_back(s);
            }
        }
    }
    
    for (auto i: o) cout << i << endl;
}
