#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int ansp = 0;
    long long nu;
    long long prev;
    for (int i= 0; i < n; i++){
        cin >> nu;
        if(prev < nu){
            ansp++;
            prev=nu;
        }else{
            ans = max(ans, ansp);
            ansp = 1;
            prev = nu;
        }
    }
    ans = max(ans,ansp);
    cout << ans << endl;
}