#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n >= 2020 ){
            if(n%4041==0||n%2021==0||n%2020==0) cout << "YES" << endl;
            else {
                bool fl = 0;
                while(n>=2021){
                    n-=2021;
                    if(n%2020==0){
                        cout << "YES" << endl;
                        fl = 1;
                        break;
                    }
                }
                if(!fl) cout << "NO" << endl;

            }
        }else{
            cout << "NO" << endl;
        }
    }
}