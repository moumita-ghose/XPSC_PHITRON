#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
       vector<int>ans(31,0);
       for(int i=0;i<30;i++){
            if((1&(n>>i))==1){
                if(ans[i]==1){
              
                    ans[i+1]=1;
                    ans[i]=0;
              
                }else if(i>0){
                    if(ans[i-1]==1){
                        ans[i+1]=1;
                        ans[i-1]=-1;
                    }else{
                        ans[i]=1;
                    }
                }else if(i==0){
                    ans[i]=1;
                }
            }
       }
       cout<<31<<endl;
       for(int i =0;i<31;i++){
            cout<<ans[i]<<" ";
       }
       cout<<endl;
    }

    return 0;
}

/*
31
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
0 -1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
0 0 0 -1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
-1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
-1 0 -1 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
-1 0 -1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
31
-1 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 

*/