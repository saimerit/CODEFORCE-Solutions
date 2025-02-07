#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int point=0;
        int s = 0;
        for (int i = 0; i<n ; i++){
            s += arr[i];
            if (s%2 == 0){
                point++;
                while (s%2 == 0){
                    s/=2;
                }
            }
        }
        cout << point << endl;
    }
    return 0;
}