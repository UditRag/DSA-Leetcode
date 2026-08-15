
        // given in question that required time complexity is log(n) i.e. binary search


        // Explaination -  

        /*
        soted array rotate kiya hai , and pivot element ka index nikalna hai

        rotated sorted array (no duplicates) - soreted array ke last elements ko first and last second ko first and last 3rd ko fisrt esa karke rotate karna

        sorted array = 2 4 5 6 8 9 10
        rotated array = 10 2 4 5 6 8 9   --- rotated 1 time (pivot = 2)
                      = 9 10 2 4 5 6 8   --- rotated 2 time (pivot = 10)

        pivot element - elements where order of inc and dec change 
        */
        
        // now lets solve the problem

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        // 4 conditoins : - 

        /*

        1. mid in 1st , target in 1st -> apply normal binary
        2. mid in 2nd and target in 2nd -> apply normal binary

        3. mid in 1st , target in 2nd -> move left to target -> s = mid +1      
        4. mid in 2nd , target in 1st -> more right to target -> e = mid-1
        
        */

        while(s <= e){
            if ( target == nums[mid]){
                return mid;
            }
            
            // condition 1 and 2 are good to go 
            else if(nums[mid] >= nums[0] && target >= nums[0]
             || nums[mid] < nums[0] && target < nums[0]){

                if(target < nums[mid]){
                    e = mid-1;
                }
                else if(target > nums[mid]){
                    s = mid+1;
                }

            }

            //conditon 3
            else if (nums[mid] >= nums[0] && target < nums[0]){
                s = mid+1;

            }
            //condition 4
            else if(nums[mid] < nums[0] && target >= nums[0]){
                e = mid-1;
            }

            mid = s+(e-s)/2;

        }
        return -1;
    }
};