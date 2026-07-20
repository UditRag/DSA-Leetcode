// vecotr letters is not required we can direclty use pattern[i]

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // first we need all the words form s , seprately
    vector <string> words;
    string word ;
    for(int i =0; i <s.size();i++){        
        if (s[i] != ' '){
            word.push_back(s[i]);
        }
        else{
            words.push_back(word);
            word = "";
            }
         if (i == s.size()-1){
            words.push_back(word);
        }
        }
    // second we need all the letters form pattern , seprately
    vector<char> letters;
    for(int i = 0;i<pattern.size();i++){
        letters.push_back(pattern[i]);
    }
    
    // now we have letters and words seprately
    // for(auto it : letters){
    //     cout<<it<< " ";
    // }
    // cout<<endl;

    // for(auto it : words){
    //     cout<<it;
    //     cout<< " ";
    // }
    // cout<<endl;

    // now we have letters and words seprately - confirmed 
    // cout<<endl;

    // one imp condition
    if(words.size() != letters.size()){
        return false;
    }


    // now mapping them
    unordered_map<char,string> forward;
    unordered_map<string,char> backward;

    // now we work on words and letters
    // mapping foward means , letter to words

    for(int i =0;i<letters.size();i++){
        if(forward.find(letters[i]) != forward.end() && forward[letters[i]] != words[i]){
            return false;
        }
        if(backward.find(words[i]) != backward.end() && backward[words[i]] != letters[i]){
                
        return false;
                
    }
    forward[letters[i]] = words[i];
    backward[words[i]] = letters[i];


    }
    return true;

    }
};