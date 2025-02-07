#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int sj = 0;
        bool hv = false;
        for (int i = 0; i < n; i++){
            sj += arr[i];
            if(arr[i]%3==1){
                hv = true;
            }
        }
        if(sj%3==0){
            cout << 0 << endl;
        }else if(sj%3==2){
            cout << 1 << endl;
        }else{
            if (hv == true) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    return 0;
}