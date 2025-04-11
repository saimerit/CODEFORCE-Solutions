#include <iostream>
#include <vector>
using namespace std;

int sumv(vector <long> b, int c){
    int result =0;
    for(int i = 0; i<c; i++) result+=b[i];
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long> a(n);
        for(int i =0; i < n; i++) cin >> a[i];
        if(n==2){
            cout << "YES" << endl;
            continue;
        }
        int k = a[0]+a[1];
        int kl = sumv(a, n);
        if(kl==(n-1)*k)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}