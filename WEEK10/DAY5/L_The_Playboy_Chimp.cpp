/*
uva : the playboy chimp
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;

        // lowerbound
        int l=0,r=n-1,mid,shortchimp=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]>=x){
                r=mid-1;
            }else if(v[mid]<x){
                shortchimp=v[mid];
                l=mid+1;
            }
        }

        //upperbound
        l=0,r=n-1;
        int tallchimp=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]<=x){
                l=mid+1;
            }else{
                tallchimp=v[mid];
                r=mid-1;
            }
        }
        if(tallchimp!=-1 && shortchimp!=-1){
            cout<<shortchimp<<" "<<tallchimp<<endl;
        }else if( tallchimp==-1 && shortchimp==-1){
            cout<<"X X\n";
        }else if(tallchimp==-1 && shortchimp!=-1){
            cout<<shortchimp<<" X\n";
        }else{
            cout<<"X "<<tallchimp<<endl;
        }
        // cout<<shortchimp<<endl;
    }
    return 0;
}