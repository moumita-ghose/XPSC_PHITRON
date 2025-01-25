#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n;
            cin>>n;
            vector<int>v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            int ans =0;
            for(int sum=1;sum<=100;sum++){
                int i=0,j=n-1;
                int curcnt=0;
               
                    while(i<j){     
                         int cursum = v[i]+v[j];          
                        if(cursum==sum){
                            curcnt++;
                            i++;
                            j--;
                        }else if(cursum>sum){
                            j--;
                        }else if(cursum<sum){
                            i++;
                        }
                      
                    }
                
                ans=max(ans,curcnt);
            }
            cout<<ans<<"\n";
    }
   

    return 0;
}

