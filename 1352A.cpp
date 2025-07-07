#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n;
        int i = 0, k = 1;
        vector<int> v;
        while(n > 0){
            m = n%10;
            n/=10;
            if(m!=0){
                i++;
                v.push_back(m*k);
            }
            k *=10;
        }
        cout << i << endl;
        for(auto j : v) cout << j << " ";
        cout << endl;
    }
}