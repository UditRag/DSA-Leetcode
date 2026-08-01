Brute - This solution gives the correct solution but it will exceed the time limit 

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // we did the classic 2 sum , that with map, so why not this a try with map also
        // oh wait map need extra spacec and we are told not to use extra space

        // Brute -

        for(int i = 0; i < numbers.size();i++){
            for(int j = i+1; j < numbers.size();j++){
                if(numbers[i]+numbers[j] == target){
                  
                    return {i+1,j+1};

                }
            }
        }
        return {};
    }
};

optimal  

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // now we start with two ends, if sum > target decrease end because that will decrease the sum , and if sum < target increase the start that will increase the sum

        int start = 0;
        int end = nums.size()-1;
        int sum;
        while(start < end){
            sum =  nums[start]+nums[end];
            if(sum > target){
                end--;
            }
           else if (sum < target){
                start++;
           }
           else{
            return {start+1,end+1};
           }
        }
        return {};
    }
};