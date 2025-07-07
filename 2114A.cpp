#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isperfectsq(int x){
    if(x>=0){
        int sr = sqrt(x);
        return sr*sr==x;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = stoi(s);
        if (isperfectsq(n)){
            int nsq = sqrt(n);
            cout << 0 << " " << nsq << endl;
        }else{
            cout << -1 << endl;
        }
    }
}