#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> result(n);

    // prefix products
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // suffix products
    for (int i = n - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    //  result by multiplying prefix and suffix products
    for (int i = 0; i < n; ++i) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    // the result
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    cout << std::endl;

    return 0;
}
