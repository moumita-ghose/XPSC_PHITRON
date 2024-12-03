/*
https://www.codechef.com/problems/PERMOR?tab=statement
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=i+1;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}