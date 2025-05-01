#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int n,p,q;
    cin >> n;
    cin >> p;
    int arrp[p];
    for(int i = 0; i < p; i++) cin >> arrp[i];
    cin >> q;
    int arrq[q];
    for(int i = 0; i < q; i++) cin >> arrq[i];

    vector<int> com;
    for(int i = 0; i < p; i++) com.push_back(arrp[i]);
    for(int i = 0; i < q; i++) com.push_back(arrq[i]);

    unordered_set<int> uniqueEle(com.begin(), com.end());
    int sum = 0;
    for (int num : uniqueEle) sum+=num;
    int con = (n*(n+1))/2;
    if(con==sum) cout << "I become the guy." << endl;
    else cout <<"Oh, my keyboard!"<<endl;
}