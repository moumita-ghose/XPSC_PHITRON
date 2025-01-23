/*
https://codeforces.com/problemset/problem/1612/B
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
        long long int n,a,b;
        cin>>n>>a>>b;
        // set<int>st;
        vector<long long int>st;
        map<int,int>mp;
        if((a<=(n/2) && b>(n/2) ) || (a>(n/2)  && b<=(n/2))){
            // cout<<" h : \n";
            int cnt=1;
            st.push_back(a);
            mp[a]++;
            if(b!=n){
                for(int i=b+1;i<=n;i++){
                    if(i!=b && mp[i]==0){
                        st.push_back(i);
                        mp[i]++;
                        cnt++;
                    }
                }
            }
            if(cnt!=n/2){
                for(int i=a+1;i<=n;i++){
                    if(cnt==n/2){
                        break;
                    }
                    if(i!=b && mp[i]==0){
                        st.push_back(i);
                        mp[i]++;
                        cnt++;
                    }
                }
            }
            // for(auto it=mp.begin();it!=mp.end();it++){
            //     cout<<it->first<<" -> "<<it->second<<endl;
            // }
            for(int i=1;i<=n;i++){
                if(mp[i]==0){
                    st.push_back(i);
                }
            }
            long long int mn=INT_MAX,mx=INT_MIN;
            for(int i=0;i<(n/2);i++){
                // cout<<st[i]<<" ";
                mn=min(mn,st[i]);
            }
            for(int i=(n/2);i<n;i++){
                mx=max(mx,st[i]);
                // cout<<st[i]<<" ";

            }
            if(mx==b && mn==a){
                for(auto it =st.begin();it!=st.end();it++){
                    cout<<*it<<" ";
                }
            }else{
                cout<<-1;
            }
            cout<<"\n";
            // cout<<endl;
            // cout<<endl;

        }else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}

