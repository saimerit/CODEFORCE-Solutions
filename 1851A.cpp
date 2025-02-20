#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,H;
        cin >> n >> m >> k >> H;
        int h[n];
        int ans = 0;
        for(int i = 0; i < n; i++) cin >> h[i];
        for(auto j : h){
            ans += abs(H-j)%k == 0 &&(H!=j) && abs(H-j) <= (m-1)*k;
        }
        cout << ans << endl;
    }

}