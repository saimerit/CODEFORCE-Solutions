#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i]==1){
                ans=max(ans,cnt);
                cnt=0;
            }else{
                cnt++;
                ans = max(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}