#include <iostream>
using namespace std;

int main(){
    int t;
     cin >> t;
     while(t--){
        int a, b;
        cin >> a >> b;
        int ans = 0;
        ans = a%b;
        if (ans == 0) cout << ans << endl;
        else {
            ans = b - ans;
            cout << ans << endl;
        }
     }
}