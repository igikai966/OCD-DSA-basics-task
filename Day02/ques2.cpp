//Question-2 2570. Merge Two 2D Arrays by Summing Values
//link- https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/
//Code-
class Solution {
public:
   vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,vector<vector<int>>& nums2) {
    vector<vector<int>>ans;//vector ans to store the answer

    //use two pointers to transverse both arrays
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size())
     {
        if(nums1.size() && nums2.size())
         {
           int temp=nums1[i][1]+nums2[j][1];
           ans.push_back({nums1[i][0],temp});
           i++;
           j++;
         }
        else if(nums1[i][0]<nums2[j][0])
         {
           ans.push_back({nums1[i][0],temp});
           i++;
           j++;
         }
         else
        {
          ans.push_back({nums2[j][0],nums2[j][1]});
          j++;
        }
     }
//if some elements of num1 are left
  while(i<nums1.size())
{
 //append all these leftovers directly into the ans
   ans.push_back({nums1[i][0],nums1[i][1]});
   i++;
}
 while(j<nums2.size())
{
 //append all these leftovers directly into the ans
   ans.push_back({nums2[j][0],nums2[j][1]});
   j++;
}
return ans;
     }
};






    








