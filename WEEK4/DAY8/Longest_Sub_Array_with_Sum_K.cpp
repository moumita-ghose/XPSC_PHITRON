/*
link : https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
      unordered_map<long long, int> prefixSum; 
        long long sum = 0;
        int maxLength = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

           
            if (sum == k) {
                maxLength = i + 1;
            }

            
            if (prefixSum.find(sum - k) != prefixSum.end()) {
                maxLength = max(maxLength, i - prefixSum[sum - k]);
            }

            
            if (prefixSum.find(sum)== prefixSum.end()) {
                prefixSum[sum] =i;
            }
        }

        return maxLength;
    }
};





int main()
{

    return 0;
}