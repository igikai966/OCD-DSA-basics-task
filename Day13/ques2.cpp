//Question 2- Minimum in Rotated sorted array
//link-https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
class Solution {
    public:
        int findMin(vector<int>& nums) {
            int low=0;
            int high = nums.size() -1;
            while( low<high){
                int mid = low +( high -low)/2;
                if(nums[mid]> nums[high]) low =mid +1;
                else high =mid;
            }
            return nums[low];
        }
    };