/*
link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int k;
    cin>>n>>k;
    vector<long long  int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int l =0,r=0;
    long long ans =0;
    multiset<long long int>ml;
    while(r<n)
    {
        ml.insert(v[r]);
        long long mn=*ml.begin();
        long long mx = *ml.rbegin();
        long long dif = mx-mn;
        if(dif<=k){
            ans=ans+(r-l+1);
            r++;
        }else{
            while( l<=r){
                
                ml.erase(ml.find(v[l]));
                l++;
                long long mn=*ml.begin();
                long long mx = *ml.rbegin();
                long long dif = mx-mn;
                if(dif<=k){
                    ans=ans+(r-l+1);
                    r++;
                    break;
                }
                
                
            }
        }

    }
    cout<<ans<<'\n';
    return 0;
}