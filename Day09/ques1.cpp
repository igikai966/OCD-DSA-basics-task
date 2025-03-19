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