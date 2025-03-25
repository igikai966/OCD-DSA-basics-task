//Question 1- Substrings with K Distinct
//link-https://bit.ly/3CfQfYi
//code-

// User function template for C++

class Solution {
    public:
      int countSubstr(string& s, int k) {
           return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
      }
      
      // Function to count substrings with at most k distinct characters
  int atMostKDistinct(string s, int k) {
      int n = s.length(), count = 0, left = 0;
      unordered_map<char, int> freq;
      
      for (int right = 0; right < n; right++) {
          freq[s[right]]++;
          
          while (freq.size() > k) {
              freq[s[left]]--;
              if (freq[s[left]] == 0) {
                  freq.erase(s[left]);
              }
              left++;
          }
          
          count += right - left + 1;
      }
      
      return count;
  }
  };