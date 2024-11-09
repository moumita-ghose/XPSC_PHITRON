/*
link : https://vjudge.net/contest/669017#problem/E

link : https://codeforces.com/problemset/problem/1703/C
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
        vector<int>final_dg(n);
        for(int i=0;i<n;i++){
            cin>>final_dg[i];
        }
        for(int i=0;i<n;i++){
            int mv ;
            cin>>mv;
            string s;
            cin>>s;
            int curr = final_dg[i];

            for(int j=0;j<mv;j++){
                if(s[j]=='U'){
                    curr = (curr-1+10)%10;
                }else{
                    curr = (curr+1)%10;
                }
            }
            cout<<curr<<" ";
        }
        cout<<endl;
    }
    return 0;
}