#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for (int x = 1; x <=n; x++){
        for (int y = 1; y <=n-x; y++){
            if(x==y)continue;
            int z = n-x-y;
            if(z==x || y == z)continue;
            if(x%3 == 0 ||y%3 == 0||z%3 == 0)continue;
            cout << "YES" << endl;
            cout << x << " " << y << " " <<  z << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}