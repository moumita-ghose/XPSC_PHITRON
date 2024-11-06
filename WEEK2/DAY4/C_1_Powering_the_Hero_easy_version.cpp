/*
link : https://codeforces.com/problemset/problem/1800/C1
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
        priority_queue<long long int>pq;
        long long int ans=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x!=0){
                pq.push(x);
            }else if(x==0 && !pq.empty()){
                ans=ans+ pq.top();
                pq.pop();
            }
        }    
        cout<<ans<<endl;
    }
    return 0;
}