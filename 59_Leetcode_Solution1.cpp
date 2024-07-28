//Leetcode Problem
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        int product = 1;
        
        // Calculate left products
        for (int i = 0; i < n; ++i) {
            answer[i] = product;
            product *= nums[i];
        }
        
        product = 1;
        // Calculate right products and multiply with the left products
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= product;
            product *= nums[i];
        }
        
        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product of array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
