#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b;
        string s;
        for(int i=__lg(n);i>=0;i--){
            // cout<<((n>>i)&1)<<" ";
            int dg =((n>>i)&1);
           if(dg==1){
            s.push_back('1');
           }else{
            s.push_back('0');
           }
        }
        // cout<<s<<endl;;
        // string s1 ="11";
        // int it=0;
        // ll ans ;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==s1[it]){
        //         it++;
        //         if(it==2){
        //             ans=i+1;
        //             break;
        //         }
        //     }
        // }
        // if(it<2){
        //     cout<<1<<endl;
        // }else{
        //     ll z=0;
        //     for(int i=0;i<s.size();i++){
        //         if(s[i]=='0'){
        //             z++;
        //         }
        //     }
        //     ll ans1 = pow(2,z);
        //     cout<<ans1<<endl;
        // }
          string s1 = "11";
    // string s = "111";
    // cout << s << endl;
    ll ans;
    ll it = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s1[it]){
            it++;
            if(it == 2){
                ans = i+1;
                break;
            }
        }
    }
    ll res = 0;
    if(it < 2){
        cout << 1<< endl;
        continue;
    }
    for(int i = ans; i < s.size(); i++){
        if(s[i] == '0'){
            res++;
        }
    }
    ll ans1 = pow(2, res);
    cout << ans1 << endl;
    // cout << res << endl;
    
    }
        
    }
   
