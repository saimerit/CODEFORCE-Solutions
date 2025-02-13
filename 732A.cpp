#include <iostream>
using namespace std;

int main(){
    int k,r;
    cin >> k >> r;
    int cnts = 0;
    while(true){
        cnts++;
        if((cnts*k)%10 == 0){
            break;
        }else if((cnts*k - r)%10==0){
            break;
        }
    }
    cout << cnts << endl;
    return 0;
}