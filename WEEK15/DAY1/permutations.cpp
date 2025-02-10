/*
https://leetcode.com/problems/permutations/description/
*/
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
class Solution {
    
    public:

        void fun(vector<int>&nums, vector<int>&a,vector<vector<int>>&ans ,int freq[]){
            if(nums.size()==a.size()){
                ans.push_back(a);
                return;
            }

            for(int i=0;i<nums.size();i++){
                if(freq[i]==0){
                    a.push_back(nums[i]);
                    freq[i]=1;
                    fun(nums,a,ans,freq);
                    freq[i]=0;
                    a.pop_back();
                }
            }
        }

        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>>ans;
            vector<int>a;
            int sz = nums.size();
            int freq[sz];
            for(int i=0;i<nums.size();i++){
                freq[i]=0;
            }    
            fun(nums,a,ans,freq);
            return ans;
        }
    };





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

return 0;
}