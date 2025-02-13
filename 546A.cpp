#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int total = k*(w*(w+1)/2);
    cout << (n>=total?0:total-n) << endl;
}