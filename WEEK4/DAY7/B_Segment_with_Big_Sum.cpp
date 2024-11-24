/*
link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll s;
    cin>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll l=0,r=0;
    ll ans = INT_MAX,sum = 0;
    while(r<n)
    {
        sum+=v[r];
        
        while(sum>=s){
            ans=min(ans,r-l+1);
            sum=sum-v[l];
            l++;
        }
        r++;
    }
       
    if(ans==INT_MAX){
        cout<<"-1\n";
    }else{   
    cout<<ans<<endl;
    }
    return 0;
}
