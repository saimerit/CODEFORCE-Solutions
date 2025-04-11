#include <iostream>
using namespace std;

int gcd(int c, int d){
    int result = min(c,d);
    while(result > 0){
        if (c%result==0 && d%result==0)break;
        result--;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int lcm = (a*b)/gcd(a,b);
        cout << lcm << endl;
    }
    return 0;
}