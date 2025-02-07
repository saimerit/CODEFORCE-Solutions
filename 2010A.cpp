#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int su = 0;
        for(int i = 0; i < n; i++){
            if (i%2==0){
                su += a[i];
            }else{
                su -= a[i];
            }
        }
        cout << su << endl;
    }
}