#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i< n; i++) cin >> a[i];
        int m = a[0];
        for(int j = 1; j < n; j++){
            m = max(m , a[j]-a[j-1]);
        }
        m = max(m, 2*(x-a[n-1]));
        cout << m << endl;
    }
    
}