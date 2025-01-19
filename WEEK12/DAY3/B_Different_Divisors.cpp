/*
https://codeforces.com/contest/1474/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<bool>v1(2000003,true);
    vector<ll> prime;
    for(int i=2;i<2000003;i++){
        if(v1[i] == true){
            // prime.push_back(i);
            for(int j=i+i;j<2000003;j=j+i){
                v1[j]=false;
            }            
        }
    }
    for(int i=2;i<2000003;i++){
        if(v1[i]==true){
            prime.push_back(i);
        }
    }

    // for(int i=0;i<prime.size();i++){
    //     cout<<prime[i]<<" ";
    // }



    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        ll f = 1+d;
        ll l=0,r=prime.size()-1 ;
        ll fd;
        while(l<=r){
            ll mid = (l+r)/2;
            if(prime[mid]>=f){
                fd = prime[mid];
                r=mid-1;
            }else{
                l=mid+1;
            }
        }      
        ll s = fd+d,sd; 
        l=0,r=prime.size()-1;
        while(l<=r){
            ll mid = (l+r)/2;
            if(prime[mid]>=s){
                sd=prime[mid];
                r=mid-1;
            }else{
                l=mid+1;
            }
        }

        cout<<fd*sd<<endl;
        // cout<<fd<<" -> "<<sd <<endl;
    }
    return 0;
}