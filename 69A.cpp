#include <iostream>
using namespace std;

int main(){
    int n;
    int x,y,z;
    int ansx=0, ansy=0, ansz=0;
    cin >> n;
    for (int i = 0; i< n; i++){
        cin >> x >> y >> z;
        ansx+=x;ansy+=y;ansz+=z;
    }
    if(ansx==0 && ansy==0 && ansz==0)cout << "YES" << endl;
    else cout << "NO" << endl; 
}