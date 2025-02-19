#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int n,m,z;
    cin >> n >> m >> z;
    int g = gcd(n,m);
    int lcm = n*m / g;
    cout << z / lcm << endl;
    return 0;
}