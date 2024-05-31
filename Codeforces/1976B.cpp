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
  int n, dif=(int)1e9;
  ll c=0;
  cin >> n;
  vt<int> a(n), b(n+1);
  for (int i=0; i<n; i++) cin>>a[i];
  for (int i=0; i<n+1; i++) cin>>b[i];
  for (int i=0; i<n; i++) {
    c+=(ll)abs(a[i]-b[i]);
    if ((b[i]<=b[n] && b[n]<=a[i]) || (a[i]<=b[n] && b[n]<=b[i]))
      dif=0;
    dif=min(dif, abs(b[i]-b[n]));
    dif=min(dif, abs(a[i]-b[n]));
  }
  c+=dif+1;
  cout<<c<<"\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int t=1;
  cin>>t;
  while (t--) solve();
  
  return 0;
}
