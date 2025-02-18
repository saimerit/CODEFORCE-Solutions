#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int od_num = 0;
        for(auto x : a) (x%2==1 ? od_num++: 0);
        cout << min(od_num, n-od_num) << endl;
    }
    return 0;
}