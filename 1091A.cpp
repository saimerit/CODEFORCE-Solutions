#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(a + 2, min(b+1, c)) * 3 - 3<< endl;
    return 0;
}