/*
=========================================
LeetCode Problem #217 - Contains Duplicate
Difficulty: Easy
=========================================

Problem:
Given an integer array nums, return true if any value appears at least twice
in the array, and return false if every element is distinct.

Example:
Input: nums = [1,2,3,1]
Output: true

Approach:
- Create an unordered_set to store the elements seen so far.
- Traverse the array one element at a time.
- If the current element is already present in the set,
  a duplicate exists, so return true.
- Otherwise, insert the element into the set.
- If the traversal finishes without finding duplicates,
  return false.

Time Complexity: O(n)
Space Complexity: O(n)

Key Concepts:
- Unordered Set
- Hashing
- Fast Lookup

Author: Udit
Language: C++
=========================================
*/

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int num : nums) {
            if (st.find(num) != st.end()) {
                return true;
            }
            st.insert(num);
        }

        return false;
    }
};