// Question -1 - Good or Bad string
//Question-link:https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1
//Code:
//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

class Solution {
  public:
    int isGoodorBad(string S) {
        int vowelCount,consonantCount=0;
        for(int i=0;i<=S.length();i++)
        {
            
            
                
                    if(S[i]=='a'|| S[i]=='e'|| S[i]=='i'|| S[i]=='o'|| S[i]=='u')
                    {
                        
                        vowelCount++;
                        if(vowelCount>5) 
                        {
                            return 0;
                        }
                        consonantCount=0;
                        
                    }
                    else if(S[i]=='?')
                    {
                        consonantCount++;
                        vowelCount++;
                        
                    }
                    else 
                    {
                        consonantCount++;
                        if(consonantCount>3)
                        {
                            return 0;
                        }
                        vowelCount=0;
                    }
                    if(vowelCount >5 || consonantCount>3){
                        return 0;
                    }
            
        }
       
       
        return 1;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}