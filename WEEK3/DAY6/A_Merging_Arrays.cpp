/*
link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>ans;
    int l =0,r=0;
   
    while(l<n && r<m){
        if(a[l]<=b[r]){
            ans.push_back(a[l]);
            l++;
            
        }else if( a[l]>b[r]){
            ans.push_back(b[r]);
            r++;
        }

    }
       
        while(l<n){
            ans.push_back(a[l]);
            l++;
        }
        
    
        
        while(r<m){
            ans.push_back(b[r]);
            r++;
        }
        
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

