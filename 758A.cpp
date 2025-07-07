#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v, v+n);
    int m = v[n-1];
    int ans = 0;
    for(int j = 0; j < n; j++) ans+= m-v[j];
    cout << ans;
}