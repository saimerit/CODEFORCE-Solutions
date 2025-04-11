#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int c = (x1 + x2 + x3)/3;
    int ans = abs(x1-c) + abs(x2-c) + abs(x3-c);
    cout << ans;
    return 0;
}