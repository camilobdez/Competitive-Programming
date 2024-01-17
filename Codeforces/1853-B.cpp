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
  int n, k, ans=0;
  cin>>n>>k;
  double p1=(pow(1.618034, k-2)-pow(1-1.618034, k-2))/sqrt(5.0);
  double p2=(pow(1.618034, k-1)-pow(1-1.618034, k-1))/sqrt(5.0);
  ll f1=(ll)floor(p1), f2=(ll)floor(p2), ls=1LL*n/f2;
  
  for (int i=ls; i>=0; i--) {
    double x1=(1.0*n-i*f2)/f1;
    if (x1>i) break;
    ans+=(floor(x1)==ceil(x1));
  }
  cout<<ans<<"\n";
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
