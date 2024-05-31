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
  int n, l=0;
  cin>>n;
  string s;
  cin>>s;
  char lastl = 'a' - 1;
  char m='0'-1;
  for (int i=0; i<n; i++) {
    if (isdigit(s[i])) {
      if (l || s[i]<m) {
        cout<<"NO\n";
        return;
      } else {
        m=s[i];
      }
    } else if (islower(s[i])) {
      l=1;
      if (s[i] < lastl) {
        cout<<"NO\n";
        return;
      }
      lastl = s[i];
    } else {
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}
  

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int t=1;
  cin>>t;
  while (t--) solve();
  
  return 0;
}
