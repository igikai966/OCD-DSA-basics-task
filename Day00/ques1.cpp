#include <bits/stdc++.h>
using namespace std;
//Question 1: Concatenation of array
//Link- https://leetcode.com/problems/concatenation-of-array/description/

class Solution{
public:
   vector<int>nums getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        for(int i=0;i<2*n;i++){
            ans[i]=nums[i%n];
        }
        return ans;
    };
