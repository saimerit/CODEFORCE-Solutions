#include <iostream>
using namespace std;

int main(){
    int dist;
    cin >> dist;
    int steps=0;
    int rem =0;
    rem += dist%5;
    if (rem!=0) steps++;
    steps += dist/5;
    cout << steps << endl;
    return 0;
}