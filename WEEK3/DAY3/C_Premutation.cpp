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
        int r = n-1;
        vector<vector<int>>final;
        vector<int>ans;
        map<int,int>last; //val,cnt;
        for(int i=0;i<n;i++){
            vector<int>v(r);

            for(int j=0;j<r;j++){
                int x ;
                cin>>x;
                v[j]=x;
           }

            last[v.back()]++;
            final.push_back(v);
           
        }
        
        
        map<int,int>ans_cnt;
        for(int i=0;i<final.size();i++){
            vector<int>pro = final[i];

            if(last[pro.back()]==1){
                ans=pro;
            }else{
                ans_cnt[pro.back()]++;
                if(ans_cnt[ pro.back()]==1)
                    ans.push_back(pro.back());
            }
            
        }
       
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
           
    }
    return 0;
}