/*
link : https://codeforces.com/contest/2005/problem/B2
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>teacher(m);
        for(int i=0;i<m;i++){
            cin>>teacher[i];
        }

        sort(teacher.begin(),teacher.end());

        while(q--){
            int david ;
            cin>>david;

            if(david<teacher[0]){
                cout<<teacher[0]-1<<endl;
                continue;
            }
            if(david>teacher[m-1]){
                cout<<n-teacher[m-1]<<endl;
                continue;
           }

            auto it = lower_bound(teacher.begin(),teacher.end(),david);
            auto ij = it;
            ij--;
            // cout<<"it -> "<<*it<< " "<<*ij<<endl;
            int left = *ij, right = *it;
            int mid = (left+right)/2;
            cout<<min(abs(mid-left) , abs(mid-right))<<endl;
        }
    }

    return 0;
}