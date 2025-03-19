
//Question 3- Maximum Score from Subarray Minimums
//ques link-https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int n=arr.size();
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
            
            int j=i+1;
            sum=arr[i]+arr[j];
             maxi=max(sum,maxi);
        }
       return maxi;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends