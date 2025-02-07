#include <iostream>
using namespace std;

int getODD(int n){
    if (n%2==0) return n/2;
    return n/2 +1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int c = getODD(n)-getODD(n-k);
        cout <<(c%2==0?"YES":"NO")<<endl;
    }
    return 0;
}