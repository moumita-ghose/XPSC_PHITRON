/*
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    auto how_many_ch  = [&](int mid)
    {
        vector<bool>b(n);
        for(int i=0;i<=mid;i++){
            b[v[i]]=true;
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(b[i]!=true && s[i]==t[j]){
                j++;
            }
            if(j==m){
                return true;
            }
        }
        return false;
    };

    int l=0,r=n-1,mid,ans=-1;
    while(l<=r){
        
        mid = (l+r)/2;
        if(how_many_ch(mid)){
            ans = mid; 
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    
    cout<<ans+1<<endl;
    return 0;
}