#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int ans =0;
        while(true){
            
            if(x.find(s) != string::npos){
                cout << ans << endl;
                break;
            }else if(ans  > 5){
                cout << -1 << endl;
                break;
            }
            x = x + x;
            ans++;
        }
    }
    return 0;
}