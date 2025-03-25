//Question 2- Longest Palindromic Substring
//link-https://leetcode.com/problems/longest-palindromic-substring/
//code-
class Solution {
    public:
        string longestPalindrome(string s) {
            int n=s.length();
            if(n==0) return "";
            int start=0;
            int maxLen=1;
             
             //Function to expand around center
        auto expandAroundCenter =[&](int left , int right){
            while(left>=0 && right<n && s[left]==s[right])
            {
               if(right -left+1 >maxLen){
                start =left;
                maxLen = right-left +1;
               }
               left--;
               right++;
        }
    };
    for(int i=0;i<n;i++){
        //Check for odd length palindrome
        expandAroundCenter(i,i);
        //Check for even-length palindrome
        expandAroundCenter(i,i+1);
    }
    return s.substr(start,maxLen);
        }
    };