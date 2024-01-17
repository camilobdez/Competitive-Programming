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
  int n, k, c=0, p=0, i=0;
  cin>>n>>k;
  ll ans=1, act=1;
  vt<int> a(n);
  
  for (int i=0; i<n; i++)
    cin>>a[i];
  
  if (a[0]!=1) {
    cout<<1<<"\n";
    return;
  }
 
  while (c<k) {
    if (p>=n) {
      ans+=1LL*p*(k-c);
      break;
    } else {
      if (act==a[i]) {
        p++;
        i++;
      } else if (act-p==ans) {
        ans=act;
        c++;
      }
      act++;
    }
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
