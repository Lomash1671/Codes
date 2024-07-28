//SORTING THE SENTENCE 
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        istringstream stream(s);
        vector<string> words(9);
        string word;
        while (stream >> word) {
            int position = word.back() - '0';
            word.pop_back();
            words[position - 1] = word;
        }
        string result;
        for (size_t i = 0; i < words.size(); ++i) {
            if (!words[i].empty()) {
                if (i > 0) result += " ";
                result += words[i];
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string sentence = "is2 sentence4 This1 a3";
    cout << "Sorted sentence: " << solution.sortSentence(sentence) << endl;
    return 0;
}
