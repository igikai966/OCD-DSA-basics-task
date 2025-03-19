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