#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if ( a+a>b){
            if ( n%2== 0){
                cout << b*(n/2) << endl;
            }else{
                cout << ((n-1)/2)*b + a << endl;
            }
        } else {
            cout << n*a << endl;
        }
    }
    return 0;
}