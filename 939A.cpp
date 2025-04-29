#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> f(n);
    for(int i = 0; i<n; i++){
        cin >> f[i];
    }
    bool k = 0;
    for(int j = 1; j<n; j++){
        if(f[f[f[j-1]-1]-1]==j){
            cout << "YES" << endl;
            k = 1;
            break;
        }
    }
    if(!k){
        cout << "NO" << endl;
    }
    return 0;
}