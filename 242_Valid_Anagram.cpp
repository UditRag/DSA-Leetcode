/*
LeetCode 242. Valid Anagram
Difficulty: Easy

Approach:
- Count the frequency of each character in the first string.
- Traverse the second string and decrease the frequency.
- If any character is missing or overused, return false.

Time: O(n)
Space: O(n)
*/

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> mp;

        // for (int i = 0; i < s.size(); i++) {
        //     if (mp.find(s[i]) == mp.end()) {
        //         mp[s[i]] = 1;
        //     }
        //     else {
        //         mp[s[i]] += 1;
        //     }
        // }

        // Simpler way
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // Match with string t
        for (int i = 0; i < t.size(); i++) {
            if (mp.find(t[i]) != mp.end() && mp[t[i]] > 0) {
                mp[t[i]]--;
            }
            else {
                return false;
            }
        }

        return true;
    }
};