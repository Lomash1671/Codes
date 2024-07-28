//Jewels and Stones
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (char stone : stones) {
            for (char jewel : jewels) {
                if (stone == jewel) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    string jewels = "aA";
    string stones = "aAAbbbb";
    cout << "Number of jewels in stones: " << solution.numJewelsInStones(jewels, stones) << endl;
    return 0;
}
