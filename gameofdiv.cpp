#include <iostream>
using namespace std;

void solve(int arr[], int n, int k){
    int id;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j){
                if (abs(arr[i] - arr[j])%k != 0){
                    id = i+1;
                    cout << "YES" << endl;
                    cout << id << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int nt;
    int n,k;
    cin >> nt;
    for (int i = 0; i < nt; i++){
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++){
            cin >> arr[i];
        }
        solve(arr, n, k);
    }

}