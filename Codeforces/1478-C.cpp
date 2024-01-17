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
  cin>>n;
  n*=2;
  vt<ll> d(n);
  vt<double> a(n/2);
  for (int i=0; i<n; i++)
    cin>>d[i];
  sort(rall(d));
  for (int i=1; i<n; i+=2) 
    if (d[i]!=d[i-1]) {
      cout<<"NO\n";
      return;
    }
  d.erase(unique(all(d)), d.end());
  ll s=0;
  for (int i=0; i<n/2; i++) {
    a[i]=1.0*(d[i]-s)/(n-2*i);
    //cout<<a[i]<<" ";
    if (floor(a[i])!=ceil(a[i]) || a[i]<=0.0 || (i>0 && a[i]>=a[i-1])) {
      cout<<"NO\n";
      return;
    }
    s+=(ll)a[i]*2;
  }
  sort(all(a));
  a.erase(unique(all(a)), a.end());
  if (sz(a)!=n/2)
    cout<<"NO\n";
  else
    cout<<"YES\n";
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
