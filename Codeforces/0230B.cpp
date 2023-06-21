#include <bits/stdc++.h>
using namespace std;
 
map<long long,int> mp;
 
void SieveOfEratosthenes(long long n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (long long p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
      for (long long p = 2; p <= n; p++)
        if (prime[p]) mp[p*p]=p;
}
  
int main() {
    int n;
    cin >> n;
    long long m=0;
    vector<long long> vs;
    for (int i=0; i<n; i++) {
        long long x; cin >> x;
        m = max(m, x);
        vs.push_back(x);
    }
    
    int fin = sqrt(m);
    SieveOfEratosthenes(fin);
    
    for (int i=0; i<n; i++) {
        if (mp.find(vs[i]) != mp.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
