
// Brute Force soltuion

class Solution {
public:
    string frequencySort(string s) {
        
        // store char according to their frequency
        unordered_map<char , int> frequency;
        for(auto it :s){
            frequency[it]++;
        }
        int max = 0;
        //finding max frequency
        for(auto it : frequency){
            if(it.second > max){
                max = it.second;
            }
        }

        // now print the number as many times it frequency starting max to min
        string final_answer;
        int i;
        while(max >=0){
            for(auto it = frequency.begin();it != frequency.end();it++){
                if(it -> second == max){
                    for(int j =0;j<max;j++){
                        final_answer.push_back(it-> first);
                    }
                }
                
            }
            max--;
        }
        
        return final_answer;
    }
};


// Optimal : Bucket Sort

class Solution {
public:
    string frequencySort(string s) {
        // frequency map
        unordered_map<char,int> mp;
        for(auto it: s){
            mp[it]++;
        }

        // lets create a vector in which we store char, in index of their frequencies
        // size euqal to size of stirng
        vector<vector<char>> freq(s.size()+1); 

        for(auto it:mp){
            freq[it.second].push_back(it.first);   
        }
        string answer;

        // now how to append the char according to freq in the answer string
        for(int i =freq.size()-1;i>0;i--){
            for(int j = 0; j< freq[i].size();j++){
                for(int k =0 ; k<i;k++){
                    answer.push_back(freq[i][j]);
                }
            }
        }
    return answer;
    }
};