#include <iostream>
using namespace std;

int main(){
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int no256 = min(k2, min(k5,k6));
    int no32 = min(k3, k2-no256);
    cout << 32*no32 + 256*no256 << endl;
    return 0;
}