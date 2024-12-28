// https://codeforces.com/contest/1370/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<__gcd(n,n/2)<<endl;
        }else if(n%2==1) {
            cout<<__gcd(n-1,n/2)<<endl;
        }
    }
    return 0;
}