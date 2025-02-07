#include <iostream>
using namespace std;

int check(int n){
    int cnt = 0;
    for (int i = 1; i <n; i++){
        for (int j = 1; j <n; j++){
            if (i == n - j){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int sol[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        sol[j] = check(a[j]);
    }
    for (int i = 0; i < n; i++) {
        cout << sol[i] << endl;
    }
    return 0;
}