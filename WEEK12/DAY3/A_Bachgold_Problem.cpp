/*
    https://codeforces.com/problemset/problem/749/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<bool>check(n+1,true);
    for(int i=2;i<=n;i++){
        if (check[i]==true){
            for(int j=i+i;j<=n;j=j+i){
                check[j]=false;
            }
        }
    }
    vector<int>allprime;
    for(int i=2;i<=n;i++){
        if(check[i]==true){
            allprime.push_back(i);
        }
    }
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=1;i<=n/2;i++){
            cout<<2<<" ";
        }
    }else{
        int sz=n-3;
        int ans_sz = ( sz/2 ) + 1;
        cout<<ans_sz<<endl;
        for(int i=1;i<=ans_sz-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    

    return 0;
}