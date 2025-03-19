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
    