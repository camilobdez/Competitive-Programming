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
  int n, a, x, init=0, fin=2e9, ans=0;
  cin>>n;
  vt<int> e;
  for (int i=0; i<n; i++) {
    cin>>a>>x;
    if (a==1)
      init=max(init, x);
    else if (a==2)
      fin=min(fin, x);
    else
      e.pb(x);
  }
  
  if (fin>=init) {
    ans=fin-init+1;
    for (int i=0; i<sz(e); i++)
      if (e[i]>=init &&  e[i]<=fin)
        ans--;
    ans=max(ans,0);
  }
  cout<<ans<<"\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while (t--)
    solve();

  return 0;
}
