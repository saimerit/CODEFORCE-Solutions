#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long x = 3;
        while(n%2== 0){
            n/=2;
        }
        if(n==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}