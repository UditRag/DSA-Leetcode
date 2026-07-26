class Solution {
public:
    string reverseVowels(string s) {
        
        // first we need to store vowel's in a place to match charc with them
        
        unordered_set<char> vowels;
        vowels.insert({'a','e','i','o','u','A','E','I','O','U'});

        int i =0;
        int j = s.size()-1;

        while(i<=j){
            if(vowels.count(s[i]) == 1 && vowels.count(s[j]) == 1){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(vowels.count(s[i]) == 0){
                i++;
            }
            if(vowels.count(s[j]) == 0){
                j--;
            }
        }
        return s;

    }
};