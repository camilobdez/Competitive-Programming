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
  int n, m, l, r;
  cin>>n;
  vt<int> a(n+1), pre(n+1, 0), suf(n+1, 0);
  for (int i=1; i<=n; i++) cin>>a[i];

  pre[2]=1;
  for (int i=2; i<n; i++) {
    pre[i+1]=pre[i];
    if (a[i]-a[i-1]>a[i+1]-a[i])
      pre[i+1]++;
    else
      pre[i+1]+=a[i+1]-a[i];
  }
  suf[n-1]=1;
  for (int i=n-1; i>=1; i--) {
    suf[i-1]=suf[i];
    if (a[i+1]-a[i]>a[i]-a[i-1])
      suf[i-1]++;
    else
      suf[i-1]+=a[i]-a[i-1];
  }

  cin>>m;
  for (int i=0; i<m; i++) {
    cin>>l>>r;
    if (l<r) cout<<pre[r]-pre[l]<<"\n";
    else cout<<suf[r]-suf[l]<<"\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t=1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}
