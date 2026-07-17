/*
LeetCode 14. Longest Common Prefix
Difficulty: Easy

Approach:
- Take the first string as the base.
- Compare each character with the corresponding character
  in every other string.
- Return the prefix until the first mismatch.

Time: O(n × m)
Space: O(1)
*/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base = strs[0];
        int count = 0;

        for (int i = 0; i < base.size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || base[i] != strs[j][i]) {
                    return base.substr(0, count);
                }
            }
            count++;
        }

        return base.substr(0, count);
    }
};