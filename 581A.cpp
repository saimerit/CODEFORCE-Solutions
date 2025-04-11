#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int diff, same;
    diff = min(a,b);
    if(a<b){
        b-=a;
        same = b/2;
    }else{
        a-=b;
        same = a/2;
    }
    cout << diff << " " << same;
}