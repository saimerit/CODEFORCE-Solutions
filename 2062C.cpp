#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSum(vector<int>& a) {
    int n = a.size();
    int currentSum = 0;
    for (int num : a) {
        currentSum += num;
    }

    // Perform difference operations until the sequence length is 1
    while (n > 1) {
        int newSum = a[n - 1] - a[0];
        if (newSum > currentSum) {
            currentSum = newSum;
        }
        // Update the sequence to its difference sequence
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1] - a[i];
        }
        n--;
    }

    return currentSum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxSum(a) << endl;
    }
    return 0;
}