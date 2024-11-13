/*

link : 
https://codeforces.com/problemset/problem/1722/D
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<int,pair<char, int>>mp1;
        for(int i=0;i<n;i++){
            int pos =-1;
            if(s[i]=='L'){
                pos=i;
            }else if(s[i]=='R'){
                pos = n-i-1;
            }
            pair<char,int>p={s[i],pos};
            mp1[i]=p;
        }
       

        vector<pair<int,pair<char,int> >>v(mp1.begin(),mp1.end());
        sort(v.begin(),v.end(),[](const pair<int,pair<char, int> >&a,const pair<int, pair<char, int>>&b){ 
            return a.second.second <b.second.second;
        });

        long long total_cnt =0;
       for(int i=0;i<v.size();i++){
          pair<int,  pair<char,int> >ind_cnt=v[i] ;
            total_cnt+=ind_cnt.second.second;
       }
       long long ans = total_cnt;
        for(int i=0;i<v.size();i++){
            pair< char ,int>p=v[i].second;
            long long int newpos =0;
            long long int prevpos = v[i].second.second;
            if(p.first=='L'){
                newpos=n-v[i].first - 1;
            }else if(p.first =='R'){
                newpos = v[i].first;
            }
            
            long long int x = ans-prevpos+newpos;
            ans= max(ans,x);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}

