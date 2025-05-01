#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int cnt = 0, t;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(5-t >= k) cnt++;
    }
    cout << cnt/3 << endl;
}