//Question 1- Move Zeros
//link- https://leetcode.com/problems/move-zeroes/submissions/1567986241/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex=0;
        for( int i=0;i<nums.size() ; i++)
        {
          // if non-zero number ,just move the index
            if(nums[i]!=0){
                nums[lastNonZeroIndex++] = nums[i];

            }
        }
      //if number is zero ,put in last of array after placing all non zero numbers 
        for(int i=lastNonZeroIndex;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
//Question 2- Rotate Array
//question link-https://leetcode.com/problems/rotate-array/description/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k % n;
        vector<int> rotated(n);

        for(int i=0;i<n;i++)
        {
            rotated[(i+k) %n]= nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=rotated[i];
        }
        
    }
};



