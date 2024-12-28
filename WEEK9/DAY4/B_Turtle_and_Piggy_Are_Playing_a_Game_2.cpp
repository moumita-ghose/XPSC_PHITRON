// https://codeforces.com/problemset/problem/2003/B
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
        deque<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=1;
        while(v.size()!=1){
            if(cnt%2==1){
                v.pop_front();
            }else{
                v.pop_back();
            }
            cnt++;
        }
        cout<<v.back()<<endl;
    }
    return 0;
}