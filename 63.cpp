//custom accumulation using lambda
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(){
    vector<string> words = {"Hello" , "world" , "from" , "C++"};
    string result = accumulate(words.begin(), words.end(), string(""),
                    [](const string& total, const string& word){
                        return total + (total.empty() ? "" : " ") + word;
                    });


    cout << "Concatenated string : " << result << endl;
    return 0;
}
