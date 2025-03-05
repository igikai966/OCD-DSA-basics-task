//Question-1
 // Question link-2549. Count distinct numbers on board
 // Code-https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
//Code-
class Solution {
    public:
        int distinctIntegers(int n) {
            if(n==1) return 1;
            else return n-1;
        }
    };
//Question-2- Chocolate distribution problem
//Question link-https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
//code-
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int n=a.size();
        int left=0,right=m-1;
         long long int ans=INT_MAX;
        while(right<n)
        {
          
           long long int diff=a[right]-a[left];
           ans=min(diff,ans);
           left++,right++;
           
            
        }
        return ans;
       
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
  
  
