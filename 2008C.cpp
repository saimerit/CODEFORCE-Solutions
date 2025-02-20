#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long l,r;
        cin >> l >> r;
        int i = 0;
        while((l+(i*(i+1)/2))<=r){
            i++;
        }
        cout << i << endl;
    }
    return 0;
}