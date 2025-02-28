#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int ans = 0;
        int jk = n/(a+b+c);
        ans += jk * 3;
        int rem = n%(a+b+c);
        if (rem == 0) cout << ans << endl;
        else if (rem <= a)cout << ans+1 << endl;
        else if(rem <= b+a)cout << ans+2 << endl;
        else if(rem <= c+b+a)cout << ans+3 << endl;
    }
}