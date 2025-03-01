#include <iostream>
using namespace std;

int main(){
    int y,w;
    cin >> y >> w;
    int outc = 6 - max(y,w) + 1;
    if (outc % 6 == 0){
        if(outc == 6) outc=1;
        cout << outc << "/1" << endl;
    }else if (outc % 2 == 0){
        cout << outc/2 << "/3" << endl;
    }else if (outc % 3 == 0){
        cout << outc/3 << "/2" << endl;
    }else{
        cout << outc << "/6" << endl;
    }
    return 0;
}