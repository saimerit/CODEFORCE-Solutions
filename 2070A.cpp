#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=0;
        for(int i = 0; i<=n; i++){
            if (i%3==i%5) ans++;
        }
        cout << ans << endl;
    }
}