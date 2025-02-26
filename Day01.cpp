#include<bits/stdc++.h>
using namespace std;

//Question 1: 263. Ugly number
//link - https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math

class Solution{
public:
     bool isUgly(int n){
       //base condition
       if(n<=0) return false;
       else{
             while(n>0){
                if( n % 2==0 ) n=n/2;
                else if ( n % 3 ==0) n=n/3;
                else if ( n % 5 == 0) n=n/5;
                else{
                      break;}
             }
        if(n==1) return true;
        else{ return false;}
  };

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
         
         
