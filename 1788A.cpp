#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int totalTwos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) totalTwos++;  
    }

    int leftTwos = 0; 
    for (int k = 1; k < n; k++) {
        if (a[k - 1] == 2) leftTwos++; 
        int rightTwos = totalTwos - leftTwos;  

        if (leftTwos == rightTwos) {
            cout << k << endl;
            return;
        }
    }

    cout << -1 << endl;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
