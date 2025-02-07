#include <iostream>
using namespace std;

int min(int arr[]){
    int min = arr[0];
    for(int i = 0; i < 3; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[]){
    int max = arr[0];
    for(int i = 0; i < 3; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        int minn = min(x);
        int maxx = max(x);
        int sum = 31;
        for (int i = minn; i<= maxx; i++){
            sum = min(sum, abs(x[0]-i) + abs(x[1]-i) + abs(x[2]-i));
        }
        cout << sum << endl;
    }    
    return 0;
}
