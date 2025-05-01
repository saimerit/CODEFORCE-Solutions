#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans1 = 0, ans2= 0;
    int i = 0, j = n-1, m, cnt = 0;
    while(i <= j && cnt<=n){
        m = max(arr[i],arr[j]);
        if(cnt%2==0)ans1+=m;
        else ans2+=m;
        if(arr[i]==m)i++;
        else j--;
        cnt++;
    }
    cout << ans1 << " " << ans2 << endl;
}