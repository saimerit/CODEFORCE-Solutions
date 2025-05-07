#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 1, comb =  1, ans= 0;
    while(comb <=n){
        if(comb==n){
            comb--;
            ans+=(n-comb)*k;
            break;
        }
        else ans+=(n-comb)*k;
        k++;
        comb++;
    }
    cout << ans;
}