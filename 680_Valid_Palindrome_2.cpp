class Solution {
public:

    // we use a little funciton here
    bool isPalindrome(string& s, int left, int right){
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            right--;
            left++;
        }
        return true;
    }


    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return isPalindrome(s,i,j-1) || isPalindrome(s,i+1,j) ; 
            }
        }
        return true;
    }
};