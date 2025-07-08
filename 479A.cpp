#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[3];
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    int ans = a[0]+a[1]*a[2];
    ans = max(ans, a[0]*(a[1]+a[2]));
    ans = max(ans, a[0]*a[1]*a[2]);
    ans = max(ans, (a[0]+a[1])*a[2]);
    ans = max(ans, a[0]+a[1]+a[2]);
    cout << ans << endl;
}