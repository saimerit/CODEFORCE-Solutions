#include <iostream>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout << ((a+b+c)%2==0 ? (a+b+c)/2:(a+b+c+1)/2 - 1) << endl;;
    }
    return 0;
}