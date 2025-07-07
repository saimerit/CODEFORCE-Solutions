#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int su = ((n*(n+1))/2);
    m = m%su;
    int i = 1;
    while(true){
        if(m>=i){
            m-=i;
            i++;
        }else{
            break;
        }
    }
    cout << m << endl;
}