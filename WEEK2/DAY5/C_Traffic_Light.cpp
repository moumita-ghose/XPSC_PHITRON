/*
https://codeforces.com/contest/1744/problem/C
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
        char c;
        cin>>c;
        string s;
        cin>>s;
        
        vector<int>suffix(n);

        if(s[n-1]=='g'){
            suffix[n-1]=n-1;
        }else{
            suffix[n-1]=-1;
        }

        for(int i=n-2;i>=0;i--){
            if(s[i]=='g'){
                suffix[i]=i;
            }else{
                suffix[i]=suffix[i+1];
            }
        }
        int ans =0;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                if(suffix[i]==-1){

                    ans = max(ans , n-1-i+1+suffix[0]);
                    // ans= max(ans, 1+suffix[0]);
                }else{
                    ans = max(ans, suffix[i]-i);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}