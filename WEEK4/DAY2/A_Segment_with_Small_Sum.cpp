/*
link :https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int l =0,r=0,ans=0;
      long long int sum =0;
    while(r<n){
      sum =sum+v[r];
        if(sum<=s){
            ans=max(ans,r-l+1);
            r++;
        }else{
            sum = sum- v[l];
            l++;r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}