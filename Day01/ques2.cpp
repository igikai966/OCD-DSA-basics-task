//Question 2: Reverse Bits
//link- https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions

class Solution{
    public:
           long long reverseBits(int n){
             long long rev_num=0;
             for(int i=0;i<32;i++){
                  if( n & (1<<i) == 1){
                    rev_num=rev_num*10 +1;}
                  else{
                     rev_num=rev_num*10;}
             }
           return rev_num;
        };
             