#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int i = 0;
        int j = n-1;
        while(i < j){
            if((s[i]=='0'&&s[j]=='0')||(s[i]=='1'&&s[j]=='1')) break;
            i++;
            j--;
        }
        cout << j-i+1 << endl;
    }
}