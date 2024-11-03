/*
problem link : https://atcoder.jp/contests/abc191/tasks/abc191_b
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(v[i]==x){
            continue;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}