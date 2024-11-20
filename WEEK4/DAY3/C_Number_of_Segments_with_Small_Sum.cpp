/*
link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector< int>v(n);
    for( int i=0;i<n;i++){
        cin>>v[i];
    }

  int l=0,r=0;
    long long int sum =0,ans =0;
    while(r<n){
        sum = sum+v[r];

        if(sum<=s){
            ans=ans+(r-l+1);
        }else{
            while(sum>s && l<=r){
                sum = sum-v[l];
                l++;
            }
            if(sum<=s){
                ans=ans+(r-l+1);
            }
        }
        r++;       
    }
    cout<<ans<<'\n';
    return 0;
}