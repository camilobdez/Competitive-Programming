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
  int n, ans=1, gcd=0;
  cin>>n;

  vt<int> a(n), divn;

  for (int i=1; i<=sqrt(n); i++)
    if (n%i == 0)
      if (n/i == i)
        divn.pb(i);
      else {
        divn.pb(i);
        divn.pb(n/i);
      }

  for (int i=0; i<n; i++)
    cin>>a[i];
  
  for (int i=1; i<n; i++)
    gcd=__gcd(gcd, abs(a[i]-a[i-1]));

  if (gcd!=1) {
    ans=sz(divn);
    cout<<ans<<"\n";
    return;
  }
  
  for (auto &d: divn) {
    if (d==1 || d==n) continue;
    gcd=0;
    for (int i=0; i<d; i++) {
      int temp=i+d, gcdl=0;
      while (temp<n) {
        gcdl=__gcd(abs(a[temp]-a[temp-d]), gcdl);
        temp+=d;
      }
      gcd=__gcd(gcd, gcdl);
    }
    ans+=(gcd!=1);
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
