/*
link : https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/
#include<bits/stdc++.h>
using namespace std;

//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int l=0,r=0;
         int ans=-1 ; 
        map<char,int>cnt;
        int n = s.size();
        while(r<n)
        {
            cnt[s[r]]++;
            if(cnt.size()==k){
                ans=max(ans,(r-l+1));
                r++;
            }else{
                while(cnt.size()>k && l<=r){
                    cnt[s[l]]--;
                    if(cnt [s[l]]==0){
                        cnt.erase(s[l]);
                    }
                    l++;    
                }
                r++;   
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}