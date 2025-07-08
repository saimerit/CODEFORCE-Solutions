#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int ans = 0;
        while(true){
            if(n%6==0){
                n/=6;
                ans++;
            }else if(n%3==0){
                n*=2;
                ans++;
            }else{
                break;
            }
        }
        if (n==1) cout << ans << endl;
        else cout << -1 << endl;
    }
}