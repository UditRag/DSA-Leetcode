class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // find the non zero and move them accordingly
        int i =0;
        int j = 0;
        while(i < nums.size() && j < nums.size()){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};