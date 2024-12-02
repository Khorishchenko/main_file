#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <algorithm>
#include <sstream>
#include <fstream>
using namespace std;

set<string> getUniqueWords(const string& text) {
    set<string> uniqueWords;
    string word;
 
    for (char ch : text) {
        if (isalnum(ch)) {
            word += ch;
        }
         else if (!word.empty()) {
            uniqueWords.insert(word);
            word.clear();
        }
        std::cout << word << std::endl;
    }
    return uniqueWords;
}
 
int main() {
    string text = "Learning programming is an essential skill skill in todays digital world.\n You can extract unique words like Learning, programming, essential, skill, etc., to store them in your structure.";
 
    set<string> uniqueWords = getUniqueWords(text);
 
    cout << "\nUnique words in alphabetical order:" << endl;
    for (const string& word : uniqueWords) {
        cout << word << " ";
    }
    cout << endl;
 
}