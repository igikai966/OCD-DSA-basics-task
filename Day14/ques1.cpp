//Question 1-
//link-https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int  ans= -1;
       int s= 0;
       int end= n;
       while(s<=end){
           int mid= s+ (end-s)/2;
           int square= mid*mid;
           if(square==n){
               return mid;
           }
           else if(square> n){
               end= mid-1;
           }
           else{
               ans= mid;
               s= mid+1;
           }
       }
       return ans;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends