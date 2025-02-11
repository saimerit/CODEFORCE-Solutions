#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            if(a>b) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}