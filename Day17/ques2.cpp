//Question 2- Remove Outermost Parenthesis
// ques link- https://leetcode.com/problems/remove-outermost-parentheses/description/
class Solution {
    public:
        string removeOuterParentheses(string s) {
            string result; //to store the final result
            int balance=0; //to keep the track of the balance of parenthesis
    
            //Iterate through each character in the string
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='('){
                    //if balance is greater than 0, that means '(' is not an outermost parenthesis
                    if(balance>0)
                       result+=s[i]; //Add the characterto the result
                
                balance++;}
    
            
            else{
                balance--; //Decrese the balance for')'
                //If balance is greater than 0,it means')' is not the outermost parenthesis
                if(balance>0)
                   result+=s[i]; //Add the character to te result
               }
            }
            return result;
            
        }
    };