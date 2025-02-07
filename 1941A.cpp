#include <iostream>
using namespace std;

int main(){
    int t,n,m,k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int b[n];
        int c[m];
        for (int i = 0;i < n;i++){
            cin >> b[i];
        }
        for (int j=0; j<m;j++){
            cin >> c[j];
        }
        int ans= 0;
        for (int i =0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (b[i]+c[j]<=k) ans++;
            }
        }
        cout << ans << endl;
    }
}