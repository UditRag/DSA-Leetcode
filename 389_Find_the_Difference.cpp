class Solution {
public:
    char findTheDifference(string s, string t) {
        // we just need one diffrenet letter that is in t but not in s
        
        unordered_map<char,int> sMap;
        for(auto it:s){
            sMap[it]++;
        }
        unordered_map<char,int> tMap;
        for(auto it:t){
            tMap[it]++;
        }
        
        for(auto it : tMap){
            if( it.second > sMap[it.first]){
                return it.first;
            }
        }
        
        return {};
    }
};