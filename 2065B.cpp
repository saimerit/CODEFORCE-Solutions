#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool k = false;
        for (int i = 0; i < s.length()-1; i++){
            if(s[i]==s[i+1]){
                cout << 1 << endl;
                k = true;
                break;
            }
        }
        if(!k) cout << s.length() << endl;
    }
}