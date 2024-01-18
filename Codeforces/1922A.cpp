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
  int n, ans=0;
  string a,b,c;
  cin>>n>>a>>b>>c;
  for (int i=0; i<n && !ans; i++)
    ans=((a[i]==b[i] && c[i]!=b[i]) || (a[i]!=b[i] && c[i]!=b[i] && c[i]!=a[i]));
  
  if (ans) cout<<"YES\n";
  else cout<<"NO\n";
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
