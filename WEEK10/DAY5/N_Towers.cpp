/*
link : https://codeforces.com/problemset/gymProblem/102961/N 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto it = upper_bound(v.begin(),v.end(),x);
        if(it==v.end()){
            v.push_back(x);
        }else{
            *it=x;
        }
    }
    cout<<v.size()<<endl;
    return 0;
}