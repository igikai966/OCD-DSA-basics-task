//Question 1- Valind Anagram
//ques link- https://leetcode.com/problems/valid-anagram/description/

class Solution {
    public:
        bool isAnagram(string s, string t) {
            int n=s.length();
            if(s.length()!=t.length())return false;
    
            else
            {
                vector<int>v(26,0);
                for(int i=0;i<n;i++){
                    v[s[i]-'a']++;
                }
                for(int j=0;j<n;j++){
                    if(v[t[j]-'a']==0)return false;//vo letter s mn present hi nhi h
                    else v[t[j]-'a']--;  
                }
                for(int k=0;k<26;k++){
                    if(v[k]!=0)return false;
                }
    
            }
            return true;
            
        }
    };