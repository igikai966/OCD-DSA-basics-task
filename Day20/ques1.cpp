//Question 1- Sort Characters by frequency
//link-https://leetcode.com/problems/sort-characters-by-frequency/description/

//code-
class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char,int>mp;
            for(auto it:s){
                mp[it]++;
            }
    
            vector<pair<char,int>> vecmp(mp.begin(),mp.end());
            sort(vecmp.begin(),vecmp.end(),[](pair<char,int>&a ,pair<char ,int> &b){
                return a.second> b.second;
            });
    
            string ans="";
            for(auto &[ch,freq]:vecmp) ans +=string(freq,ch);
    
            return ans;
        }
    };