//Half Strings are Alike
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int count1 = 0, count2 = 0;
        
        for (int i = 0; i < n / 2; ++i) {
            if (isVowel(s[i])) {
                ++count1;
            }
        }
        
        for (int i = n / 2; i < n; ++i) {
            if (isVowel(s[i])) {
                ++count2;
            }
        }
        
        return count1 == count2;
    }
    
private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

int main() {
    Solution solution;
    string s = "book";
    cout << (solution.halvesAreAlike(s) ? "true" : "false") << endl;
    return 0;
}
