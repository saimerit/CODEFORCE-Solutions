#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int i = 0;
        int x = 0;
        while((-n<=x)&&(x<=n)){
            i++;
            if (i%2==0){
                x += ((2*i) - 1);    
            }else{
                x -= ((2*i) - 1);
            }
        }
        if(i%2==0){
            cout << "Kosuke" << endl;
        }else{
            cout << "Sakurako" << endl;
        }
    }
    return 0;
}