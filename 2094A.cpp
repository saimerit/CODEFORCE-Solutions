#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;
        vector<string> words;
        while(ss >> word){
            words.push_back(word);
        }
        for (const auto& w : words){
            cout<<w[0];
        }
        cout << endl;
    }
    return 0;
}