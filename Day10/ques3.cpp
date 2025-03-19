//Question-3 Best time to buy and sell stock
//ques link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int buy=0,sell=-1;
            int n=prices.size();
            for(int i=0;i<n;i++)
            {
                if(prices[i]<prices[buy])buy=i;
            }
            for(int j=buy+1;j<n;j++){
                sell=buy+1;
                if(prices[j]>prices[sell])sell=j;
            }
            if(sell==-1)return 0;
            return prices[sell]-prices[buy];
            
        }
    };
    