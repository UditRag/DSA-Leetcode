/*
=========================================
LeetCode Problem #1 - Two Sum
Difficulty: Easy
=========================================

Problem:
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

You may assume that each input has exactly one solution,
and you may not use the same element twice.

Approach:
- Traverse the array once.
- Store each element and its index in an unordered_map.
- For every element, calculate the required complement:
      complement = target - nums[i]
- If the complement already exists in the map,
  return its index along with the current index.
- Otherwise, insert the current element into the map.

Time Complexity: O(n)
Space Complexity: O(n)

Author: Udit
Language: C++
*/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};