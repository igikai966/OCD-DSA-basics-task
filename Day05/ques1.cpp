//Question 1- Most visited sector in a circular array
// Question link- https://leetcode.com/problems/most-visited-sector-in-a-circular-track/description/?envType=problem-list-v2&envId=array
class Solution {
    public:
        vector<int> mostVisited(int n, vector<int>& rounds) {
            vector<int>visited(n,0);
            int start,end=start+1;
            int size= rounds.size();
            vector<int>ans;
            for(start=0;start<n-1;start++){
                if(rounds[start]<=rounds[end])
                {
                    for(int k=rounds[start];k<rounds[end];k++){
                        visited[k+1]++;
                    }
                }
                else{
                    for(int k=rounds[start];k<=n;k++){
                        visited[k+1]++;
                    }
                }
                int maxi=-1;
                maxi=max(visited[start],maxi);
              
                ans.push_back(maxi);
            }
            return ans;
            
        }
    };