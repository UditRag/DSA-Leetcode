class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // if have to build ransomNote using magazine
        // and each letter in magazine can only be used once in ransomNote
        if(magazine.size() < ransomNote.size()){
            return false;
        }

        // set of ransomNote
        unordered_set<char> ra;
        for(auto it: ransomNote){
            ra.insert(it);
        }

        // map ransomNote
        unordered_map<char,int> ransom;
        for(auto it: ransomNote){
            ransom[it]++;
        }

        // map magazine
        unordered_map<char,int> mag;
        for(auto it: magazine){
            mag[it]++;
        }

        // now check if frequires requied to make ransom is in mag or not
        for(auto it: ra){
            if(ransom[it] > mag[it]){
                return false;
            }
        }
    
    return true;

    }
};