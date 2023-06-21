#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    int los[n];
    for(int i=0; i < n; i++) cin >> los[i];
    
    sort(los,los+n,greater<int>());
    
    int c=1;
    long long ans = 0;
    while (n/c) {
        long long sm = 0;
        for (long long i=0;i<=n/c-1 ; i++) sm+=los[i];
        ans += sm;
        c *= 4;
    }
    cout << ans << endl;
    
}
