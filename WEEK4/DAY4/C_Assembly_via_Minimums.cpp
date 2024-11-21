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
        int x = n*((n-1)/2);
        vector<int>v(x);
        set<int>st;
        for(int i=0;i<x;i++){
            cin>>v[i];
            st.insert(v[i]);
        }
        if(st.size()==1){
            for(int i=1;i<=n;i++){
                cout<<v[0]<<" ";
            }
        }else if(st.size()>1){
            vector<int>ans(n);
            for(auto it = st.begin();it!=st.end();it++){
                ans.push_back(*it);
            }
            if(st.size()!=n){
                while(st.size()<n){
                    int y = (*st.rbegin()) +1;
                    ans.push_back(y);
                }
            }

            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        
        }
            cout<<endl;

    }
    return 0;
}