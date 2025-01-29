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
        int n,k;
        cin>>n>>k;
        // if(n==3){
        //   cout<<"1 3 2\n";
        //   continue;
        // }
        int l=1,r=n;
        vector<int>ans(n+1,-1);
        int time_to_Initialize;
       int st=1;
        int cur=1;
          while(1)
          {
            if(st>n){
              cur=cur+2;
              st=cur;
            }
            if(ans[st]==-1){
              ans[st]=l;
              l++;
              st=st+k;
            }else{
              break;
            }

          }
        int cur_r=2,str=2;
        while(1)
        {
            if(str>n){
              cur_r=cur_r+2;
              str=cur_r;
            }
            if(ans[str]==-1){
              ans[str]=r;
              r--;
              str=str+k;
            }else{
              break;
            }

        }
      
       

           
        for(int i=1;i<=n;i++){
          if(ans[i]==-1){
            cout<<" _ ";
          }else{
            cout<<ans[i]<<" ";
          }
        }
        cout<<"\n";
    }
    return 0;
}

