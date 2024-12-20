/*
no.: 9
link  : https://www.codechef.com/problems/XORRY1
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll bt = __lg(x);
        ll b ,a;
        for(int i=bt;i>=0;i--){
          
           if((x>>i)&1){
                a=x-(1LL<<i);
                break;
           }
        }
        b=x^a;
        cout<<a<<" "<<b<<endl;
      
    }

    return 0;
}