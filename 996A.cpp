#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans =0;
    ans+=n/100;
    n%=100;
    ans+=n/20;
    n%=20;
    ans+=n/10;
    n%=10;
    ans+=n/5;
    n%=5;
    ans+=n;
    cout << ans << endl;
}