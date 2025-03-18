//Question 3-Spiral Matrix
//link- https://leetcode.com/problems/spiral-matrix/description/
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int rowstart=0,colstart=0;
            int n=matrix.size(); //number of rows
            int m=matrix[0].size(); // number of columns
            int rowend=n,colend=m;
            vector<int>ans(n*m);
            while(rowstart<=rowend && colstart<=colend)
            {
                for(int j=colstart;j<colend;j++){
                    ans.push_back(matrix[rowstart][j]);
                }
                rowstart++;
                for(int j=rowstart;j<rowend;j++){
                    ans.push_back(matrix[j][colend]);
                }
                colend--;
                if(rowstart<=rowend){
                for(int j=colend;j>=colstart;j--){
                    ans.push_back(matrix[rowend][j]);
                }
                rowend--;
                }
                if(colstart<=colend){
                for(int j=rowend;j>=rowstart;j--){
                    ans.push_back(matrix[j][colstart]);
    
                }
                colstart++;
                }
            }
            return ans;
        }
    };