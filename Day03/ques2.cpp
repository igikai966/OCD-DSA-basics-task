//Question-2 Number of Equivalent Domino Pairs
// Question link-
//https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=problem-list-v2&envId=2030iluv
//Code-
class Solution{
    public:
          int numEquivDominoPairs(vector<vector<int>>& dominoes){
            map<pair<int ,int>,int>mp;
            int cnt=0;
            for(vector v:dominoes)
              {
                int a=v[0],b=v[1];
                if(a>b){
                  swap(a,b);
                }
               if(mp[{a,b}]) cnt+=mp[{a,b}];
               mp[{a,b}]++;
              }
          return cnt;
          }
    };