#include <iostream>
#include <string>
using namespace std;

// Compute num_str % u without converting to long long
int mod_string(const string& num_str, int u) {
    int rem = 0;
    for (char c : num_str) {
        rem = (rem * 10 + (c - '0')) % u;
    }
    return rem;
}

// Increment a number represented as string
bool next_number(string &s) {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '9') {
        s[i] = '0';
        i--;
    }
    if (i < 0) return false;
    s[i]++;
    return true;
}

// Modified solve function that returns a string
string solve(int m, int u){
    string digits = "19";

    string mi(m, digits[0]); // "111...1"
    string ma(m, digits[1]); // "999...9"

    string num = mi;
    while (true) {
        if (mod_string(num, u) == 0)
            return num;

        if (num == ma || !next_number(num))
            break;
    }
    return "-1";
}

int main(){
    int n, t;
    cin >> n >> t;
    cout << solve(n, t) << endl;
}
