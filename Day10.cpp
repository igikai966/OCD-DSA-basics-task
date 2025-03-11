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
//Question-3 Best time to buy and sell stock
//ques link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0,sell=-1;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<prices[buy])buy=i;
        }
        for(int j=buy+1;j<n;j++){
            sell=buy+1;
            if(prices[j]>prices[sell])sell=j;
        }
        if(sell==-1)return 0;
        return prices[sell]-prices[buy];
        
    }
};

