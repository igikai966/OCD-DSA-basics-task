//Question1- TwoSum
//question link-https://leetcode.com/problems/two-sum/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n-1;i++){
            int diff=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==diff)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
        
    }
};
//Question2-  Sort colors
//ques link-https://leetcode.com/problems/sort-colors/description/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZero=0,countOne=0,countTwo=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)countZero++;
            else if(nums[i]==1)countOne++;
            else countTwo++;
        }
        int idx=0;
        while(countZero--){
            nums[idx++]=0;
        }
        while(countOne--){
            nums[idx++]=1;
        }
        while(countTwo--){
            nums[idx++]=2;
        }
    }
};
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



