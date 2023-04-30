// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> result;
//         map<string, vector<string>> mp;
        
//         for(auto i: strs){
//             sort(temp.begin() , temp.end());
//             mp[temp].push_back(i);
//         }
//         for(auto i:mp){
//             result.push_back(i.second);
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;  
        map<string,vector<string>> mp;
        
        for(auto i:strs){
            string copy = i;
            sort(copy.begin(),copy.end());
            
            mp[copy].push_back(i);
        }
        
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};