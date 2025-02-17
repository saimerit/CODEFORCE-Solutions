#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        vector<int> a(4);
        a[0]=0;
        for(int i=1; i <=3; i++) cin >> a[i];
        cout << ((a[x]!=0 &&a[a[x]]!=0) ? "YES":"NO") << endl;
    }
    return 0;
}