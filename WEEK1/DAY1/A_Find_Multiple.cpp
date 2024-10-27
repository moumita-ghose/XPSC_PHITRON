/*
    problem link : https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    // int i=2;
    int ans =0;
    // while(c*i>=a && c*i<=b){
    //     ans = c*i;
    //     i++;
    // }
    for(int i =1;i<=c;i++){
        ans = c*i;
        if(ans>=a && ans<=b){
            break;
        }
    }
    if(ans>=a && ans<=b){
        cout<<ans<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}