#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cor[2] = {1, n}; 

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int j = n / i;
            if (j - i < cor[1] - cor[0]) {
                cor[0] = i;
                cor[1] = j;
            }
        }
    }

    cout << cor[0] << " " << cor[1] << endl;
    return 0;
}