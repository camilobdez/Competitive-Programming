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

ll c(int n, int r) {
  if (n<r) return 0;
  double sum=1;
  for (int i=1; i<=r; i++)
    sum=sum*(n-r+i)/i;
  return (ll)sum;
}

void solve() {
  int n, a, p=-1;
  cin>>n;
  map<int,int> mp, pre;
  for (int i=0; i<n; i++) {
    cin>>a;
    mp[a]++;
  }
  ll ans=0;
  for (auto &[v, t]: mp) {
    pre[v]=t+pre[p];
    ans+=c(t, 3);
    ans+=c(t, 2)*pre[p];
    p=v;
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
