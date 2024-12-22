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
        string s ;
        cin>>s;

        int l =0,r=n-1;
        int match=0,bug=0;
        while(l<r){
            if(s[l]==s[r]){
                match=match+2;
            }else{
                bug++;
            }
            l++;
            r--;
        }
        string ans;
        // cout<<match<<" "<<bug<<endl;
        for(int i=0;i<=n;i++){
            int total = i;
            total = total-bug;
            if(total<0){
                ans.push_back('0');
                continue;
            }
            total = max((total %2) ,total-match);
            total = max(0,total - (n%2));
            if(total==0)
            {
                ans.push_back('1');
            }else{
                ans.push_back('0');
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}