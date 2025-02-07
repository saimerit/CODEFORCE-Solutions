#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t-- ){
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int sol;
        for (int a3 = -200; a3 <= 200; a3++){
            sol = max(sol, (a3 == a1+a2)+(a3 == a4 - a2)+(a3 == a5 - a4));
        }
        cout << sol << endl;
    }
    return 0;
}