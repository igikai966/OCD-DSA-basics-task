//Question-1
 // Question link-2549. Count distinct numbers on board
 // Code-https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
//Code-
class Solution {
    public:
        int distinctIntegers(int n) {
            if(n==1) return 1;
            else return n-1;
        }
    };