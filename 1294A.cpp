#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a[3],n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a,a+3);
        cout << (n < 2*a[2] - a[1] - a[0] || (n-(2*a[2]-a[1]-a[0]))%3!=0 ? "NO" : "YES"  ) << endl;
    }
}