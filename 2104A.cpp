#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b+c)%3!=0) cout << "NO" << endl;
        else{
            int x = (a+b+c)/3;
            if(x <= c && x >= a && x >= b)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}