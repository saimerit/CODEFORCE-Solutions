#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0, k;
        for (int i = 0; i < n-1; i++){
            cin >> k;
            ans+=k;
        }
        cout << -ans << endl;
    }
    return 0;
}