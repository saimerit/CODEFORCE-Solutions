#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        if(k<=n){
            cout << (k>0) << endl;
            continue;
        }
        k-=n;
        int ans = 1;
        int a = n-1;

        while(k>0){
            k-=a;
            ans++;
            if (k<=0) break;
            k-=a;
            ans++;
            a--;
        }
        cout << ans << endl;
    }
    return 0;
}