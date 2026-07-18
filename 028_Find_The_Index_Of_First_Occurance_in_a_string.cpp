#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main(){
    string needle = "sad";
    string haystack  = "sadbutsad";

    set <int> base;
    for(int i =0;i<haystack.size();i++){
        if(needle[0] == haystack[i]){
            base.insert(i);
        }
    }
    // lets see what stored in base
    for(auto it : base ){
        cout<<it<<" ";
        }
        cout<<endl;
        
    // we got what we needed
    // now to check for another words

    for(int i =1; i <needle.size();i++){
        for(auto it:base){
            if (haystack[it+i] != needle[i]){
                base.erase(it);
            }
        }
    }
    for(auto it : base){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<< *base.begin();
}