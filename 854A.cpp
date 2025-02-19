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


bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main(){
    int n;
    cin >> n;
    int a = 1;
    int v = 1;
    while(a<n-a){
        if (areCoprime(a,n-a)&&v<a&& a != n-a){
           a = max(a,v);
           v = a;
        }
        a++;
    }
    cout << v << " " <<n- v << endl;
    return 0;
}