//FIND THE DUPLICATE WORDS IN A STRING
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     getline(cin,s);
//     int n=s.length();
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i]==s[j]){
//                 count++;
//             }
//         }
//     }
//     cout<<"The number of duplicate words in the string is: "<<count;
//     return 0;
// }
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
const int MAX_WORDS = 1000;
void printDuplicateWords(const string& str) {
    string words[MAX_WORDS];
    int wordCount[MAX_WORDS] = {0};
    int wordIndex = 0;
    istringstream stream(str);
    string word;
    while (stream >> word) {
        bool found = false;
        for (int i = 0; i < wordIndex; ++i) {
            if (words[i] == word) {
                wordCount[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            words[wordIndex] = word;
            wordCount[wordIndex] = 1;
            wordIndex++;
        }
    }
    cout << "Duplicate words in the string are: ";
    for (int i = 0; i < wordIndex; ++i) {
        if (wordCount[i] > 1) {
            cout << words[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    printDuplicateWords(input);
    return 0;
}

