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
        int one =0,zero =0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                zero++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                one++;
            }
        }

        cout<<max(one,zero) <<endl;
    }
    return 0;
}