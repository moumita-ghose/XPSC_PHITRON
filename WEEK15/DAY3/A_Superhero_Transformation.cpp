/*
https://codeforces.com/problemset/problem/1111/A
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
    
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"No\n";
    }else{
        bool fg = true;
        for(int i=0;i<s.size();i++){
            if( (s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && (t[i]=='a'||t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')){
               fg = true;
            }else if((s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u') && (t[i]!='a'&& t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')){
                fg=true;
            }else{
                fg=false;
                break;
            }

        }

        if(fg==true){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }


    }



return 0;
}