/*
link : https://codeforces.com/problemset/problem/1857/C
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
        long long int m =( n*(n-1))/2;
        vector<long long >v(m);
        for(long long i =0;i<m;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        for(long long i=0;i<m;i=i+(--n)){
            cout<<v[ i]<<" ";
        }
        cout<<1000000000<<endl;
    }
    return 0;
}