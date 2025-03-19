//Question-2- Next permutation
//link-https://leetcode.com/problems/next-permutation/description/
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size(); //size of the array
    
            //Step1: Find the breakpoint
            int ind=-1; //breakpoint
            for(int i= n-2;i>=0;i--){
                if(nums[i] < nums[i+1]){
                    //index i is the breakpoint
                    ind=i;
                    break;
                }
            }
            //If the breakpoint does not exist
            if(ind==-1)
            {
                //reverse the whole array:
                reverse(nums.begin(),nums.end());
                
                
            }
    
            //Step2: Find the next greater element and swap it with arr[ind]:
            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            //Step 3: reverse the right half
            reverse(nums.begin()+ind+1,nums.end());
           
    
            
        }
    };