/*
link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int l=0,r=0,cnt=0;
    while(l<m){
        if(r<n && v2[l]>v1[r]){
            cnt++;
            r++;
        }else {
            l++;
            cout<<cnt<<" ";
        }
    }

    cout<<endl;
    return 0;
}