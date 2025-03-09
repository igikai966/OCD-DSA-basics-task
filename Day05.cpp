//Question 1- Most visited sector in a circular array
// Question link- https://leetcode.com/problems/most-visited-sector-in-a-circular-track/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int>visited(n,0);
        int start,end=start+1;
        int size= rounds.size();
        vector<int>ans;
        for(start=0;start<n-1;start++){
            if(rounds[start]<=rounds[end])
            {
                for(int k=rounds[start];k<rounds[end];k++){
                    visited[k+1]++;
                }
            }
            else{
                for(int k=rounds[start];k<=n;k++){
                    visited[k+1]++;
                }
            }
            int maxi=-1;
            maxi=max(visited[start],maxi);
          
            ans.push_back(maxi);
        }
        return ans;
        
    }
};
//Question2- Stock Span problem
// Question link- https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            int c=1;
            int span=0;
            int idx=i;
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
                idx= idx-c;
                span+=arr[idx];
                c= arr[idx];
            }
            st.push(arr[i]);
            arr[i] = span+1;
        }
        return arr;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
