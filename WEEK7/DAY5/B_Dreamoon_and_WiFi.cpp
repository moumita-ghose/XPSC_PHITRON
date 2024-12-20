#include<bits/stdc++.h>
using namespace std;
#define d double
#define ll long long
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int cnt1=0;
    for(int i=0;i<s1.size();i++) {
        if(s1[i]=='+'){
            cnt1++;
        }else if(s1[i]=='-'){
            cnt1--;
        }
    }   
    int cnt2=0,unrec=0;

    for(int i=0;i<s2.size();i++){
        if(s2[i]=='+'){
            cnt2++;
        }else if(s2[i]=='-'){
            cnt2--;
        }else if(s2[i]=='?'){
            unrec++;
        }
    }
    ll match=0;
    
    for(int i=0;i<(1<<unrec);i++){
        int x = cnt2;
        for(int j=0;j<unrec;j++){
            if((i>>j)&1){
                x++;
            }else{
                x--;
            }
        }
        if(x==cnt1){
            match++;
        }
    }
    // cout<<match<<" \n";
    cout<<fixed<<setprecision(12)<<(d)match/(d)(1<<unrec)<<endl;
    return 0;
}