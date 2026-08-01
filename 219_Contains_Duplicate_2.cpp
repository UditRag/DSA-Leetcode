//we dont need to compare the element with every other element, we just need to check if we had this element before in the array and if yes at what index did we saw it, and this answer's for the conditioin with k 


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i = 0; i < nums.size(); i ++){
           if(freq.find(nums[i]) != freq.end()
            && i - freq[nums[i]] <= k){
            return true;
            }
           
            freq[nums[i]] = i;
           

        }
        return false;
    }
};