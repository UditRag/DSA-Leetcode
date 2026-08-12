
// Brute Force approach - 

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // basically check wether it is sorted acending or decending if true return true else false

        // make a copy
        vector<int>copy1 = nums;
        vector<int>copy2 = nums;
        sort(copy1.begin(),copy1.end()); // acending
        sort(copy2.begin(), copy2.end(), greater<int>()); // desending
        bool value1 = true;
        bool value2 = true;

        for(int i =0; i < nums.size(); i ++){
            if(nums[i] != copy1[i]){
                value1 = false;
                break;
            }
        }
        for(int i =0; i < nums.size(); i ++){
            if(nums[i] != copy2[i]){
                value2 = false;
                break;
            }
        }
        if(value1 || value2){
            return true;
        }
        return false;
        
        
    }
};