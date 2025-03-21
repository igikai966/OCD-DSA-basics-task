//Question 1-1614. Maximum Nesting Depth of the Parentheses
//link- https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
    public:
        int maxDepth(string s) {
            int balance=0,maxi=INT_MIN;
            int n=s.length();
            for(int i=0;i<n;i++){
                if(s[i]=='(')balance++;
                if(s[i]==')')balance--;
                if(balance>maxi)maxi=balance;
    
            }
            return maxi;
            
        }
    };