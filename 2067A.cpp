#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int d = x+1-y;
        if( d>=0 && d%9==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}