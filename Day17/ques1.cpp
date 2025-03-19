//Question1- Isomorphic strings
//ques link-
https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
    public:
        bool isIsomorphic(string s, string t)
         {
            map<char,char> mp;
            //check the length
            if(s.length()!=t.length())return false;
            else{
                int size=s.length();
                for(int i=0;i<size;i++){
                    if(mp[s[i]]==NULL)
                       mp.insert({s[i],t[i]});
                    else if(mp[s[i]]!=t[i])return false;
                    else continue;
                    
                }
                
            }
            return true;
        }
    };