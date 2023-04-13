#include <bits/stdc++.h>
using namespace std;


int main()
{
	freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);
    int n;
    cin >> n;
    map<string, vector<string>> m;
    map<string, map<string,int>> ps;
    vector<vector<string>> ks;

    while (n--) {
        string a;
        int k;
        cin >> a >> k;
        while (k--) {
            string s;
            cin >> s;
            m[s].push_back(a);
        }
    }
    
    for (auto i: m) {
        if (i.second.size() > 1) {
            ks.push_back(i.second);
        }
    }
    
    m.clear();
    
    int maximus=1;
    for (int i=0; i<ks.size(); i++) {
        for (int j=0; j<ks[i].size()-1; j++) {
            for (int q=j+1; q<ks[i].size(); q++) {
                ps[ks[i][j]][ks[i][q]]++;
                maximus=max(maximus, ps[ks[i][j]][ks[i][q]]);
            }
        }
    }
    
    
    cout << maximus+1 << endl;

    return 0;
}