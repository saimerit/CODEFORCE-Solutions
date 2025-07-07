#include <iostream>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        long long a,b,n,s;
        cin >> a >> b >> n >> s;
        if(s%n <= b && a*n+b >=s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}