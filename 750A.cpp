#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int timether = 240 - k;
    int noq = 0;
    int timecompl = 0;
    while (noq <= n && timether >= timecompl) {
        noq++;
        timecompl += 5 * noq;
    }
    cout << noq-1 << endl;
    return 0;
}