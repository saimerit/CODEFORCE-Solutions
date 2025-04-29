#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int lea = (n-1)/2;
    int arr[lea+1];
    int i = 0;
    for(char a : s){
        if(isdigit(a)){
            arr[i] = a-'0';
            i++;
        }
    }
    sort(arr, arr+lea+1);
    for(int j = 0; j < lea+1; j++){
        if(j==lea)cout << arr[j];
        else cout << arr[j] <<"+";
    }
    cout << endl;

}