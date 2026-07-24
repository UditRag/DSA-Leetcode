
// Brute Force Solution - 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i< nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

optimal -- 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // classic two pointer  
        // already sorted means max square be at only the ends of the array
        int k = 0;
        int j = nums.size()-1;

        // first square
        for(int i = 0 ; i <nums.size() ; i++){
            nums[i] = nums[i]*nums[i];
        }

        vector<int>answer(nums.size());
        int writer = nums.size()-1;
        while(k<=j){
            if(nums[k]>nums[j]){
                answer[writer] = nums[k];
                k++;
                writer--;
            }
            else{
                answer[writer] = nums[j];
                j--;
                writer--;
            }
        }
        return answer;
    }
};