#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    int su = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        su+=v[i];
        if(v[i]==0)cnt++;
    }
    if(cnt==0)cout << -1 << endl;
    else{
        int c =0;
        while(su%9!=0){
            su-=5;
            c++;
        }
        string s(n-cnt-c, '5');
        string sup(cnt, '0');
        s+=sup;
        if(n-cnt-c==0) cout << 0 << endl;
        else cout << s;
    }
}