#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> g(n);
        for(int i = 0; i< n; i++)cin >> g[i];
        sort(g.begin(),g.end());
        int i = 1;
        bool fl = 0;
        while(i < n){
            if(g[i]-g[i-1] > 1){
                fl = 1;
                cout << "NO" << endl;
                break;
            }
            i++;
        }
        if(!fl)cout << "YES" << endl;
    }
}