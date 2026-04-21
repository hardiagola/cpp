#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    map<string, int> wordCount;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;


    while (ss >> word) {
        wordCount[word]++;
    }
    for (auto it = wordCount.begin(); it != wordCount.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
