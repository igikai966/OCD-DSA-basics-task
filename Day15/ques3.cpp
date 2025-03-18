//Question -Search a 2D matrix-2
// link-https://leetcode.com/problems/search-a-2d-matrix-ii/description/

class Solution {
    public:
        
        int searchRow(vector<vector<int>>& matrix,int target,int low, int high){
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(matrix[mid][0]==target)return mid;
                else{
                    if(matrix[mid][0]<target) low=mid+1;
                    high=mid-1;
                }
    
            }
            return high;
        }
        bool searchCol(vector<vector<int>>& matrix,int target , int low,int high,int row){
            while(low<=high){
                int mid=low+(high-low)/2;
                if(matrix[row][mid]==target)return true;
                else
                {
                    if(matrix[row][mid]<target)low=mid+1;
                    high=mid;
                }
            }
            return false;
    
        }
    
    
    
    
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m=matrix.size();
            int n=matrix[0].size();
            //if matrix contain only 1 element
            if(m==1 && n==1){
                if(target==matrix[0][0])return true;
                return false;
            }
            //if matrix contain only 1 row
            if(m==1)return searchCol(matrix,target,0,n-1,0);
         
        
            //search which row
            int row=searchRow(matrix,target,0,m-1);
            //searh which colums
            bool col=searchCol(matrix,target,0,n-1,row);
    
            return col;
            
        }
        
    };
    