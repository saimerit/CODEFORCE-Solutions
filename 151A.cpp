#include <iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int td = k*l;
    int tlc = c*d;
    int toastford = td/nl;
    int toastfors = p/np;
    cout << min(toastford, min(toastfors, tlc))/n << endl;
    return 0;
}