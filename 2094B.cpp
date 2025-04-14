#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l_prime = max(l, min(0, r - m));
        int r_prime = l_prime + m;

        if (r_prime < 0 || l_prime > 0) {
            l_prime = max(l, 0 - m);
            r_prime = l_prime + m;

            if (r_prime > r) {
                r_prime = r;
                l_prime = r_prime - m;
            }
        }

        cout << l_prime << " " << r_prime << endl;
    }
    return 0;
}
