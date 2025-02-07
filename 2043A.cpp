#include <iostream>
using namespace std;

int main(){
    int t;
    long long sol;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        sol = 1;
        while(n > 3){
            n /=4;
            sol *= 2;
        }
        cout << sol << endl;
    }
}