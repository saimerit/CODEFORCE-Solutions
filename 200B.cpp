#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long double t,s=0;
    for(int i = 0; i <n; i++){
        cin >> t;
        s+=t;
    }
    cout << (s/(n*100))*100 << endl;
}