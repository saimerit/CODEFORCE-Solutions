#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int n = abs(b-a);
        int ans = n/10;
        if(n%10!=0)ans++;
        cout << ans << endl;
    }
}