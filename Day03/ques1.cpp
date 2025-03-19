// Question-1   Flipping an image
//Question-link-
//https://leetcode.com/problems/flipping-an-image/?envType=problem-list-v2&envId=array
//Code-
class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image){
          int n=image.size();
          
          for(int i=0;i<n;i++){
             int l=0;r=n-1;
            while(l<=r)
              {//swap
                int temp=image[i][l];
                image[i][l]=image[i][r]^1;
                image[i][r]=temp^1;
                 l++;
                 r--;
              }
          }
    return image;
        }
    };