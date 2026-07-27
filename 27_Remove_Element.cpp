class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        // listen we just need the count of elements that are not equal to val
        while(i<nums.size() && j<nums.size()){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
};