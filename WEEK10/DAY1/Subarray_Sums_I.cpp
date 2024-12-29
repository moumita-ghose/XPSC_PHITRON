/*
https://cses.fi/problemset/task/1660/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=0;
    ll target=0;
    ll cnt=0;
    while(j<n)
    {

        target=target+v[j];
        while(target>=x){
            if(target==x){
                cnt++;
            }
            target= target-v[i];
            i++;
        }
        j++;         
    }
    cout<<cnt<<endl;
    return 0;
}