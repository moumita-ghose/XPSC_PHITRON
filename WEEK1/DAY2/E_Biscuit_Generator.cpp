/*
problem link : https://vjudge.net/contest/666748#problem/E
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    t=t+0.5;
    if(a<=t){
        int sum =0;
        int i=1;
        int multi = 1;
        while(multi<=t){
            multi = a*i;
            i++;
            sum = sum + b;
        }
        cout<<sum-b<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}