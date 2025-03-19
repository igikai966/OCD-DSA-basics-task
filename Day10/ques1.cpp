//Question 1- Rearrange Elements by sign
//Question link-https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> vec(nums.size(),0);
            int i=1,j=0,k;
            for(k=0;k<nums.size();k++)
            {
                if(nums[k]<0){
                    vec[i] = nums[k];
                    i+=2;
                }
                else{
                    vec[j] = nums[k];
                    j+=2;
                }
            }
            return vec;
            
        }
    };