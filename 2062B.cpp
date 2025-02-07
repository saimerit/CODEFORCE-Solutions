#include <iostream>
#include <algorithm>
using namespace std;

int maxDisbele(int arr[], int n){
    int dist = arr[0];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            dist = max(dist, abs(arr[j] - arr[i]));
        }
    }
    return dist;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Find the minimum value in the array
        int minElem = *min_element(arr, arr + n);

        // The maximum distance between any two clocks is (n - 1)
        int maxDist = maxDisbele(arr, n);

        // Check if the minimum value is greater than the maximum distance
        if (minElem < maxDist) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}