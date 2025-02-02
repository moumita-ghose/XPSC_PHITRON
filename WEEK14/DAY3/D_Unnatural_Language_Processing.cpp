/*
https://codeforces.com/problemset/problem/1915/D
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            cout<<s;pr
        }else if(n==3){
            cout<<s;pr
        }else{
            vector<string>ans;
            char v1='a',v2='e';
            for(int i=0;i<s.size();){
                //3 len
                if(i+3<=n && (s[i+1]=='a' || s[i+1]== 'e' ) && (s[i+2]!='a'&&s[i+2]!='e') &&(s[i+3]!='a'&&s[i+3]!='e') ){
                    string x;
                    x.push_back(s[i]);
                    x.push_back(s[i+1]);
                    x.push_back(s[i+2]);
                    ans.push_back(x);
                    i=i+3;
                }else{
                    string x;
                    x.push_back(s[i]);
                    x.push_back(s[i+1]);
                    ans.push_back(x);
                    i=i+2;
                }
            }
            for(int i=0;i<ans.size()-1;i++){
                cout<<ans[i]<<".";
            }
            cout<<ans[ ans.size()-1];
            pr
        }
    }   

return 0;
}