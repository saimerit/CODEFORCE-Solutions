#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if ( n > 2) cout << n-2 << endl;
    else if ( n == 2) cout << 4 << endl;
    else cout << 3 << endl;
    return 0;
}