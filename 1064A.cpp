#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> sid(3);
    cin >> sid[0] >> sid[1] >> sid[2];
    sort(sid.begin(),sid.end());
    cout << max(0,sid[2]-(sid[0]+sid[1]-1)) << endl;
    return 0;
}