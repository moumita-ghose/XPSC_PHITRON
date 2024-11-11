/*
link : https://codeforces.com/problemset/problem/1791/C
*/
 
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
        string s;
        cin>>s;
 
        int l=0,r=n-1;
        int ind = 0;
        while(l<r){
            if(s[l]!=s[r]){
                ind=ind+2;
                l++;
                r--;
            }else{
                break;
            }
        }
        cout<<n-ind<<endl;
    }
    return 0;
}