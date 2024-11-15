/*
problem link : https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/MOONSOON?tab=statement
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<long long int>car(n);
        vector<long long int>outlet(m);

        for(int i=0;i<n;i++){
            cin>>car[i];
        }

        for(int i=0;i<m;i++){
            cin>>outlet[i];
        }

        sort(car.begin(),car.end(),greater<int>());
        sort(outlet.begin(),outlet.end(),greater<int>());
        long long int ans =0;
        for(int i=0;i<min(n,m);i++){
            long long int x = outlet[i]*h;
            // if(car[i]>=x){
            //     ans+=x;
            // }else{
            //     ans+=car[i];
            // }
            ans+=min(x,car[i]);

        }
        cout<<ans<<endl;
    }
    return 0;
}