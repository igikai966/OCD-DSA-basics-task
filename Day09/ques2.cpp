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