/*
https://codeforces.com/problemset/problem/1881/D
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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>cnt;
        for(int i=0;i<n;i++){
            for(int j=2;j*j<=v[i];j++){
                while(v[i]%j==0){
                    cnt[j]++;
                    v[i]=v[i]/j;
                }
            }
            if(v[i]>1){
                cnt[v[i]]++;
            }
        }

        bool flag= true;
        for(auto it = cnt.begin();it!=cnt.end();it++){
            // cout<<it->first<<" - > "<<it->second<<endl;
            if(it->second%n!=0){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}