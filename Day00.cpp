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

//Question 2:Contain Duplicate
//Link:https://leetcode.com/problems/contains-duplicate/description/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>arr;
sort(arr,arr+n);
        for(int i=0;i<n;i++){
if(arr[i]==arr[i++]){
     return false;
             }
        return true;
    };



