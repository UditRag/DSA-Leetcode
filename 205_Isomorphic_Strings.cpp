class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // given s and t have same size
        unordered_map <char,char> forward;
        unordered_map<char,char> backword;
        for(int i =0;i<s.size();i++){
            if(forward.find(s[i]) != forward.end() && forward[s[i]] != t[i]){
                return false;
            }
            if(backword.find(t[i]) != backword.end() && backword[t[i]] != s[i]){
                
                return false;
                
            }
            forward[s[i]] = t[i];
            backword[t[i]] = s[i];


        }
        return true;
    }
};