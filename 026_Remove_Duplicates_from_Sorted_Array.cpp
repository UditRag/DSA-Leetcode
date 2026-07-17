/*
LeetCode 26. Remove Duplicates from Sorted Array
Difficulty: Easy

Approach:
- Keep the first element.
- Traverse the array once.
- If the current element is different from the last unique element,
  place it at index k and increment k.

Time: O(n)
Space: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};