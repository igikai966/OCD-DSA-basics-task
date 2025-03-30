//Question 2- Partition Labels
//link-https://leetcode.com/problems/partition-labels/description/?envType=problem-list-v2&envId=string
//code-
class Solution {
    public:
        vector<int> partitionLabels(string s) {
            unordered_map<int,int> lookup;
            for(int i=0;i<s.length();i++){
                lookup[s[i]]=i; 
    
            }
            int first=0,last=0;
            vector<int>result;
            for(int i=0;i<s.length();++i){
                last=max(last,lookup[s[i]]);
                if(last==i){
                    result.push_back(i-first+1);
                    first=i+1;
                }
            }
            return result;
    
    
            
        }
    };
