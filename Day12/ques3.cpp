//Question 3- Search Insert Position
//link-https://leetcode.com/problems/search-insert-position/description/
class Solution {
    public:
        
        long long int searchInsert(vector<int>& nums, int target) {
            
             long long int s=0,e=nums.size()-1;
             //base case
             if(nums[e]<target)return e+1;
            while(s<=e){
                long long int m=(s+e)/2;
                if(nums[m]==target)return m;
                if(nums[m]<target)s=m+1;
                else e=m-1;
            }
            return s;
            
        }
    };