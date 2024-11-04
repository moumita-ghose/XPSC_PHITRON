/*
link : https://vjudge.net/contest/669017#problem/D
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
        string s;
        cin>>s;
        // if(s=="Timur" || s=="miurT" ||s=="Trumi" || s=="mriTu"){
        //     cout<<"YES\n";
        // }else{
        //     cout<<"NO\n";
        // }
        bool flag = true;
        for(int i=0;i<s.size();i++){
            if(  n==s.size() && (s[i]=='T' || s[i]=='i' || s[i]=='m' || s[i]=='u' || s[i]=='r')){
                flag = true;
            }else{
                flag= false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}