//Question 1- Can place Flowers
//  Question link-https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0 && (i ==0 || flowerbed[i-1]==0 )&& (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
                if(n ==0) return true;
            }
        }
        return false;
    }
};
//Question 2- Minimum possible sum subarray
//Question link- https://leetcode.com/problems/minimum-positive-sum-subarray/description/?envType=problem-list-v2&envId=prefix-sum
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int minSum=INT_MAX;
        bool found=false;

        for(int start =0; start<n; ++start)
        {
            int sum=0;
            for(int end=start;end<n;++end){
                sum+=nums[end];
                int length= end-start+1;
                if( length>= l && length<=r && sum>0){
                    minSum =min(minSum ,sum);
                    found=true;
                }
            }
        }
        return found? minSum:-1;
        
        
    }
};
    
