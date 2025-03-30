//Question 1- Push Dominoes
//link-https://leetcode.com/problems/push-dominoes/description/?envType=problem-list-v2&envId=string
//code-
class Solution {
    public:
       void solveConfiguration(vector<char>&arr ,int i,int j){
        if(arr[i]=='L' && arr[j]=='L'){
            //make all dots as L
            for(int k=i-1;k<j;k++) arr[k]='L';
        }
        else if(arr[i] =='R' && arr[j]=='R'){
            //make all dots as R
            for(int k=i+1;k<j;k++) arr[k]='R';
        }
        else if(arr[i] =='L' && arr[j]=='R'){
            //nothing to do
        }
        else{
            //solve according to odd count and even count of dots
            int diff=j-i;
            int mid=(i+j)/2;
            if(diff%2 == 0)//odd dots
            {
                for(int k=i+1;k<mid;k++)arr[k]='R';
                for(int k=mid+1;k<j;k++) arr[k]='L';
    
            }
            else{
                //even dots
                for(int k=i+1;k<=mid;k++)arr[k]='R';
                for(int k=mid+1;k<j;k++)arr[k]='L';
            }
        }
       }
    
        string pushDominoes(string dominoes) {
            int n=dominoes.length();
            vector<char>arr(n+2);//first aur last mn L and right dal diya is array kee
            arr[0]='L';
            arr[n+1]='R';
    
            for(int i=1;i<=n;i++){
                arr[i]=dominoes[i-1];
            }
            int j=0;
            int k=1;
    
            while(k<arr.size()){
                while(arr[k]=='.')k++;
                solveConfiguration(arr,j,k);
                j=k;
                k++;
    
            }
            string res="";
            for(int i=1;i<arr.size()-1;i++){
                res+=arr[i];
            }
            return res;
            
        }
    };