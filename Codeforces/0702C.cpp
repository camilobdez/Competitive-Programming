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

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  
  int n, m, ans=0;
  cin>>n>>m;

  vt<int> a(n), b(m);

  for (int i=0; i<n; i++) cin>>a[i];
  for (int j=0; j<m; j++) cin>>b[j];

  int p1=0, p2=0;

  while (p1<n && p2<m) {
    while (p2<m-1 && abs(a[p1]-b[p2])>=abs(a[p1]-b[p2+1]))
        p2++;
    ans=max(ans, abs(a[p1]-b[p2]));
    p1++;
  }

  cout<<ans;
  return 0;
}
