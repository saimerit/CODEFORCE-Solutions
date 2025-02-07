#include <iostream>
using namespace std;

void solve(int a , int b){
    if (a>=b){
            cout << a << endl;
    }else if (a<b){
        cout << max(0, a-(b-a)) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        solve(a,b);
    }
    return 0;
}