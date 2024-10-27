/*
problem link : https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans =0;
    int i=0;
    while(i<2){
        ans = ans+max(a,b);
        if(max(a,b)==a){
            a--;
        }else{
            b--;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}