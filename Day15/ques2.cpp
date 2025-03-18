//Question 2- Search a 2D matrix-1
//link-https://leetcode.com/problems/search-a-2d-matrix/


class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m=matrix.size();//no of rows
            int n=matrix[0].size(); //no of colums
            int low=0;
            int high=m*n-1;
            while(low<=high){
                //binary search on matrix
                int mid=low+(high-low)/2;
                int row=mid/(matrix[0].size());
                int col=mid % (matrix[0].size());
                if(matrix[row][col]==target)return true;
                else{
                    if(matrix[row][col]<target)low=mid+1;
                    high=mid;
                }
            }
            return false;
            
        }
    };