// Brute Force Solution - complexity of (n2 * k)

class Solution {
public:


    // First let's build a function to check 2 string are anagram or not

    bool isAnagram(string s, string t){
        // match size
        if(s.size() != t.size()){
            return false;
        }
        // now work on first string and store frequencies
        unordered_map<char,int> mp;
        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
        }

        // second string matchup
        for(int i =0;i<t.size();i++){
            if(mp.find(t[i]) != mp.end() && mp[t[i]] > 0){
                mp[t[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // we need a vector of vector of strings to return as answer
        
        vector<vector<string>> answer;

        // need a vector of string to store local group of anagram and then push in answer
        vector<string> group;

        // need to create a skip vector, contains index of elements to skip
        vector <int> skip;

        // now check which elements are anagram w.r.t. base element
        for(int i = 0; i<strs.size();i++){
            if(find(skip.begin(),skip.end(),i) != skip.end()){
                continue;
            }         
            string base = strs[i];
            // now check if anagram or not, if yes push in group
            for(int j=0;j<strs.size();j++){
                if(isAnagram(base,strs[j])){
                    group.push_back(strs[j]);
                    skip.push_back(j);
                }
            }
            answer.push_back(group);
            group.clear();
            


            
        }
        
        return answer;
    }


    
};




// Optimal Solution -  Complexity of (k * nlogn)



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // see all the anagrams when sorted are same, so we dont need to check if they are anagram or not of every word, just group the words with same sorted string 

        // every anagram group has same sorted value i.e. signature, so we can use that signature as 'key' and list of strings as 'value' in hashmap

        unordered_map<string,vector<string>> mp;
        
        // now lets loop the process
        for(int i =0;i<strs.size();i++){
            string base = strs[i];
            sort(base.begin(),base.end());
            mp[base].push_back(strs[i]);
        }

        // make a vector to return 
        vector<vector<string>> answer;
        // push the values form the map
       
        for(auto it = mp.begin(); it != mp.end();it++){
                answer.push_back(it -> second);
            }
        
        return answer;

    }
};