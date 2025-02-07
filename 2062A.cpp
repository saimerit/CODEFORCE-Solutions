#include <iostream>

using namespace std;

int minOperations(const string& s) {
    int currentOverlap = 0;

    for (char ch : s) {
        if (ch == '1') {
            currentOverlap++;
        }
    }
    return currentOverlap;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minOperations(s) << endl;
    }
    return 0;
}