#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define fi first
#define se second

void solve() {
  int n;
  string s;
  cin >> n >> s;
  map<char, set<int>> mp;
  
  for (int i=0; i<n; i++) {
    mp[s[i]].insert(i);
  }

  int l=0, r=0, ans=n;
  set<char> c;
  while (l<n && r<n) {
    c.insert(s[l]);
    while (c.size()<mp.size() && r<n) {
      r++;
      c.insert(s[r]);
    }
    if (r==n) break;
    auto it = mp[s[l]].lower_bound(l+1);
    while (l+1<r && it != mp[s[l]].end() && *it<=r) {
      l++;
      it = mp[s[l]].lower_bound(l+1);
    }
    ans=min(ans, r-l+1);
    if (ans==mp.size()) break;
    c.erase(s[l]);
    l++;
  }

  cout<<ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t=1;
  //cin>>t;
  
  while (t--)
    solve();
  return 0;
}
