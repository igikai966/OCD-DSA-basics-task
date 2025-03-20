//Question 2- Longest Common Prefix
//ques link-  https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            string ans;
           int minLen=INT_MAX;
           for(int i=0;i<n;i++){
            if(minLen>strs[i].length())
                   minLen=strs[i].length();
           }
           for(int i=0;i<minLen;i++)
           {
            char ch=strs[0][i];
            bool flag=true;
            for(int j=0;j<n;j++){
                if(ch!=strs[j][i]){
                    flag=false;
                    break;
                }
                
            }
            if(!flag)return ans;
            else ans.push_back(ch);
    
           }
    
           return ans;
    
            
        }
    };
