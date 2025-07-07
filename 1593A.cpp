#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long m = max(a,max(b,c));
        if (a==0 && b == 0 && c==0) cout << 1  << " " << 1 << " " << 1 << endl;
        else if(a==m && b == m) cout << 1 << " " << 1 << " " << m-c+1 << endl;
        else if (c==m && b == m) cout << m-a+1 << " " << 1 << " " << 1 << endl;
        else if (c==m && a == m) cout << 1 << " " << m-b+1 << " " << 1 << endl;
        else cout << (m==a? 0 : m-a+1) << " " << (m==b? 0 : m-b+1) <<" "  <<(m==c? 0 : m-c+1) << endl; 
    }
}