#include <iostream>
using namespace std;

int main(){
    int n, t=1, sol=0;
    cin >> n;
    while (sol < n){
        sol += t;
        if (sol == n) cout << "YES" << endl;
        else if (sol > n) cout << "NO" << endl;
        t++;
    }
}