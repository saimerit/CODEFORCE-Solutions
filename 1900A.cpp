#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        if(s.find("...") != string::npos){
            cout << 2 << endl;
        }else{
            cout << count(s.begin(), s.end(), '.') << endl;
        }
    }
    return 0;
}