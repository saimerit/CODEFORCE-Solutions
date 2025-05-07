#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if( n % 2==1) cout << 0;
    else{
        int ans = 1;
        int i = 0;
        while(i++ < n/2) ans*=2;
        cout << ans;
    }
}