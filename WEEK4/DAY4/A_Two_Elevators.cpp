/*\
https://codeforces.com/problemset/problem/1729/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ta = abs(a-1);
        int tb=0 ;
        if(b>c){
            tb = (b-c)+(c-1);
        }else{
            tb = (c-b)+(c-1);
        } 

        if(ta<tb){
            cout<<1<<endl;
        }else if(ta>tb){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }

    }
    return 0;
}