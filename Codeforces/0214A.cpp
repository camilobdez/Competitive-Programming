#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
    
    int c=0;
    
    for (long long i=0; i<=1000; i++) {
        long long eq = i + pow(n, 2) - 2 * pow(i, 2) * n + pow(i, 4);
        
        if (n-i*i >= 0 && eq == m) c++;
    }
    
    cout << c << endl;
 
    return 0;
}
