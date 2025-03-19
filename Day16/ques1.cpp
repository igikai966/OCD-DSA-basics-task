//Question 1- Unique characters in a string
//ques link-https://leetcode.com/problems/first-unique-character-in-a-string/description/
class Solution {
    public:
        int firstUniqChar(string s) {
            map<int,int>mp;
            
            //map will store characters index as key and their frequecy as value
            for(int i=0;i<s.length();i++){
                ++mp[s[i]];
                //inserting characters into map
                
            }
            for(int i=0;i<s.length();i++){
                if(mp[s[i]]==1)return i;
                
            }
            return -1;
        }
    };
