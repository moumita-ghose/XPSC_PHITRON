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

        bool ispalin(string &s,int l,int r)
        {
            while(l<=r){
                if(s[l++]!=s[r--]){
                    return false;
                }
            
            }            
          
            return true;
        } 

        void fun(int ind, string &s ,int n,vector<vector<string>>&ans,vector<string>&a){
            if(ind==n){
                ans.push_back(a);
                return;
            }
            for(int i=ind;i<n;i++){
              
                if(ispalin(s,ind,i)==true){
                    string st = s.substr(ind,i-ind+1);
                    a.push_back(st);
                   fun(i+1,s,n,ans,a);
                    a.pop_back();
            }
        }
    }
        vector<vector<string>> partition(string s) {
            vector<vector<string>>ans;
            vector<string>a;
            int n=s.size();
            fun(0,s,n,ans,a);
            return ans;
        }
    };


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

return 0;
}