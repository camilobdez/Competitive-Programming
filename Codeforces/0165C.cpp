//CAMILOOOSADASAS JODEEER
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void init_code() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}
 
 
int main() {
	//init_code();
	ios_base::sync_with_stdio(false); cin.tie(0);
    ll k;
    string s;
    cin >> k >> s;
    map <ll, ll> mp;
    mp[0] = 1 ;
    ll sum = 0, ans = 0;
 
    for (auto i : s) {
        sum += i - '0';
        if (sum>=k) ans+= mp[sum-k];
        mp[sum]++;
    }
 
    cout << ans;
 
	return 0;
}
