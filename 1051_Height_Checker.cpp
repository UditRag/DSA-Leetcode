Brute Force Solution : 


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>checker;
        for(auto it : heights){
            checker.push_back(it);
        }
        sort(checker.begin(),checker.end());
        int count = 0;
        for(int i =0; i< heights.size(); i++){
            if(heights[i] != checker[i]){
                count++;
            }
        }
        return count;
    }
};