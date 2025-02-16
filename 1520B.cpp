#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=0;
        for(long long p = 1; p<=n; p=p*10+1){
            for (int d=1; d<= 9; d++){
                if(p*d <=n)ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}