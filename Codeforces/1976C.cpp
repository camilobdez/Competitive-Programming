#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
typedef long double     ld;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;

#define deb(x)          cout << x
#define X               first
#define Y               second
#define SZ(x)           int(x.size())
#define all(x)          x.begin(), x.end()
#define mins(a,b)       (a = min(a,b))
#define maxs(a,b)       (a = max(a,b))
#define pb              push_back
#define Mp              make_pair
#define kill(x)         {cout << (x) << '\n'; exit(0);}
#define killt(x)        {cout << (x) << '\n'; return;}
#define lc              id<<1
#define rc              lc|1

const ll  INF = 1e9 + 23;
const ll  MOD = 1e9 + 7;
const int MXN = 4e5 + 23;
const int LOG = 23;


void solve() {
    int n, m;
    cin >> n >> m;
    int t = n+m+2;
    vector<ll> a(t, 0), b(t, 0), prea(t,0), preb(t,0), sufa(t+3,0), sufb(t+3,0), ca(t,0), cb(t,0);

    for (int i=1; i<t; i++) cin >> a[i];
    for (int i=1; i<t; i++) cin >> b[i];

    for (int i=1; i<t; i++) {
        ca[i] = ca[i-1] + (a[i] > b[i]);
        cb[i] = cb[i-1] + (a[i] < b[i]);
        prea[i] = prea[i-1] + a[i]*(a[i] > b[i]);
        preb[i] = preb[i-1] + b[i]*(a[i] < b[i]);
    }

    int posa=t+2, posb=t+2, posaa=t+2, posbb=t+2;
    for (int i=0; i<=n+m+1; i++) {
        if (posa==t+2 && ca[i]==n) posa=i;
        if (posaa==t+2 && ca[i]==n+1) posaa=i;
        if (posb==t+2 && cb[i]==m) posb=i;
        if (posbb==t+2 && cb[i]==m+1) posbb=i;
    }

    for (int i=t-1; i>=1; i--) {
        sufa[i] = sufa[i+1] + a[i];
        sufb[i] = sufb[i+1] + b[i];
    }

    for (int i=1; i<t; i++) {
        int temp1=posa, temp2=posb;
        if (a[i]>b[i] && i<=posa) temp1=posaa;
        if (a[i]<b[i] && i<=posb) temp2=posbb;
        
        if (temp1<temp2) {
            cout << prea[temp1]+preb[temp1]+sufb[temp1+1] - (temp1<i ? b[i] : (a[i]>b[i] ? a[i] : b[i])) << " ";
        } else {
            cout << prea[temp2]+preb[temp2]+sufa[temp2+1] - (temp2<i ? a[i] : (a[i]>b[i] ? a[i] : b[i])) << " ";
        }
    }
    cout<<"\n";
}

int main() {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}