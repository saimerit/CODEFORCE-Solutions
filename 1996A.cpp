#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n%4==0){
            cout << n/4 << endl;
        }else if(n%4==2){
            cout << (n-2)/4 + 1 << endl;
        }
    }
}