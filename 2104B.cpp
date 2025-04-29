#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        
        sort(a.rbegin(), a.rend()); // Sort decreasing order
        
        vector<long long> prefix(n+1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i+1] = prefix[i] + a[i];
        }
        
        for (int k = 1; k <= n; ++k) {
            cout << prefix[k] << " ";
        }
        cout << endl;
    }
}
