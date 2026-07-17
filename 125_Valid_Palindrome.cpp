/*
LeetCode 125. Valid Palindrome
Difficulty: Easy

Approach:
- Convert the string to lowercase.
- Use two pointers from both ends.
- Skip non-alphanumeric characters.
- Compare the remaining characters.

Time: O(n)
Space: O(1)
*/

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // making lower case
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }

        // Two Pointer Approach
        int start = 0;
        int end = s.size() - 1;

        while(start < end){

            if(isalnum(s[start]) == false){
                start++;
                continue;
            }

            if(isalnum(s[end]) == false){
                end--;
                continue;
            }

            else if(s[start] != s[end]){
                return false;
            }

            else if(s[start] == s[end]){
                start++;
                end--;
            }
        }

        return true;
    }
};