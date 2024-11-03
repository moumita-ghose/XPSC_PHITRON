/*
problem link: https://codeforces.com/problemset/problem/1165/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    multiset<int>ms;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ms.insert(x);
    }
    int day=1;
    for(auto it=ms.begin();it!=ms.end();it++){
        if(day<=*it){
            day++;
        }
        // cout<<*it<<" ";
    }
    // cout<<endl;
    cout<<day-1<<endl;
    return 0;
}