/*
LeetCode 238. Product of Array Except Self
Difficulty: Medium

Approach:
- Store prefix products in the answer array.
- Traverse from right while maintaining a suffix product.
- Multiply prefix and suffix products to get the final answer.

Time: O(n)
Space: O(1) (excluding the output array)
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        int rightProduct = 1;

        // Prefix Product
        for (int i = 1; i < n; i++) {
            answer[i] = nums[i - 1] * answer[i - 1];
        }

        // Suffix Product
        for (int i = n - 2; i >= 0; i--) {
            rightProduct = nums[i + 1] * rightProduct;
            answer[i] = answer[i] * rightProduct;
        }

        return answer;
    }
};