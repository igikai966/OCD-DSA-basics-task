//Question 2- KOKO eating bananas
//link-https://leetcode.com/problems/koko-eating-bananas/description/
class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            long long int left=1;
            long long int right=*max_element(piles.begin(),piles.end());
    
            while(left<=right)
            {
                long long int mid= left+(right-left)/2;
                if(canEatInTime(piles,mid,h))right=mid-1; //possible speed but phir bhi thoda alsi bnn skte h kya i.e speed kam
                else left=mid+1;
    
            }
            return left;
        }
        int canEatInTime(vector<int>& piles,long long int k,int h){
            long long hours=0;
            for(long long int pile:piles){
                long long int div=pile/k;
                hours+=div;
                if(pile% k !=0)hours++;
            }
            return hours<=h;
        }
    };
