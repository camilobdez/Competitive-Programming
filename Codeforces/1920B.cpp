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
  int n, k, x, ans=-1e9;
  cin>>n>>k>>x;
  vt<int> a(n), p(n+1,0);
  for (int i=0; i<n; i++)
    cin>>a[i];

  sort(all(a));

  for (int i=1; i<=n; i++)
    p[i]=p[i-1]+a[i-1];

  for (int i=n-k; i<=n; i++)
    ans=max(ans, p[i]-2*(p[i]-p[max(i-x,0)]));

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
