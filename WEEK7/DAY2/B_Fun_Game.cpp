#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{

    int tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s==t || s[0]=='1'){
            cout<<"YES\n";
            continue;
        }
        int pos =-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                pos = i;
                break;
            }
        }
        if(pos!=-1){
            bool flag = true;
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    if(pos>i){
                        flag = false;
                        break; 
                    }
                }
            }

            if(flag == true)
                cout<<"YES\n";
            else    
                cout<<"NO\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}