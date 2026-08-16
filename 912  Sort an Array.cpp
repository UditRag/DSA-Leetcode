
        
        
        
    // Bubble Sort : - Brute (complexity n**2)
        
        
        int cycle = 0;
        
        while(cycle < nums.size()-1){
            for(int i = 0; i < nums.size()-1;i++){
                if(nums[i] > nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
            cycle++;
        }



    // Bubble sort :- Optimal (complexity n**2, best = n)


        int cycle = 0 ;
        while(cycle < nums.size()-1){
            // in comparing elements in each cycle last element get fixed so we dont need to check the last element and then other last, keep decreasing
            for(int i = 0; i< nums.size()-1-cycle; i++){
                if(nums[i] > nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
        }





    // Selection Sort :- Optimal( complextiy - n**2, best n**2)

        int cycle = 0 ;
        while(cycle < nums.size()-1){
            // find the smallest element in the unsorted array
            int min = INT_MAX;
            int min_index =-1;
            for(int i = 0 + cycle; i < nums.size();i++){
                if(nums[i] < min){
                    min = nums[i];
                    min_index = i;
                }
            }
            swap(nums[cycle],nums[min_index]);
            cycle++;
        }


   


