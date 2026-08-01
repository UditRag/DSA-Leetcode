class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // basically we have to return the 3rd maximum or largest number in the array and if does not exist return the largest

        // let make a set, cause the duplication of numbers, we dont need that, well sorting that is an excellent option

        set<int> maxi;
        for(auto it: nums){
            maxi.insert(it);
        }

        // now we need 3rd largest, means the 3rd element from the last and if not then last

        if(maxi.size() >= 3){
           auto it = maxi.begin();
           advance(it,maxi.size()-3);
           return *it;
        }
        else{
            return *maxi.rbegin();
        }
        return 0;
    }
};