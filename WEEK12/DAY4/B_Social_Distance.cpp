/*
https://codeforces.com/contest/1668/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int pep,chair;
        cin>>pep>>chair;
        vector<int>v(pep);
        for(int i=0;i<pep;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        vector<ll>total(pep);
        total[0]=v[0]+1+v[0];
        for(int i=1;i<pep-1;i++){
            total[i]=total[i-1] + abs(v[i]-v[i-1])+1+v[i];
        }
        total[pep-1]=total[pep-2]+abs(v[pep-1]-v[pep-2])+1+abs(v[0]-v[pep-1]);
        if(total.back()<=chair){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

