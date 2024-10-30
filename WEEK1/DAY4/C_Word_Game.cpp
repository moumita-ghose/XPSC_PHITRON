/*
link : https://codeforces.com/problemset/problem/1722/C
*/

#include<bits/stdc++.h>
using namespace std;

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
        vector<string>v1(n);
        vector<string>v2(n);
        vector<string>v3(n);
        map<string,int>mp;
        int per1=0,per2=0,per3=0; 
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            mp[v1[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
            mp[v2[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v3[i];
            mp[v3[i]]++;
        }

        // for(int i=0;i<n;i++)
        // {
           
        //         cout<<v1[i]<<" ";
        // }

        //     cout<<endl;
        // for(auto it = mp.begin();it!=mp.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        // cout<<endl;

        for(int i=0;i<v1.size();i++)
        {
            if(mp[v1[i]]==1){
                per1=per1+3;
            }else if(mp[v1[i]]==2){
                per1=per1+1;
            }
        }
        for(int i=0;i<v2.size();i++)
        {
            if(mp[v2[i]]==1){
                per2=per2+3;
            }else if(mp[v2[i]]==2){
                per2=per2+1;
            }
        }
        for(int i=0;i<v3.size();i++)
        {
            if(mp[v3[i]]==1){
                per3=per3+3;
            }else if(mp[v3[i]]==2){
                per3=per3+1;
            }
        }


        cout<<per1<<" "<<per2<<" "<<per3 <<endl;

    }
    return 0;
}

