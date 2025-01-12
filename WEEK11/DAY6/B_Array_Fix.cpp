/*
https://codeforces.com/problemset/problem/1948/B
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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES\n";
            
        }else{
            int prev = 0;
            bool flag = true;
            for(int i=0;i<n;i++){
                if(v[i]<prev){
                    flag = false;
                    break;
                }else{
                    int x = v[i]/10;
                    int y = v[i]%10;
                    if(prev<=x && x<=y){
                        prev=y;
                    }else{
                        prev=v[i];
                    }
                }
            }
            if(flag==true)
            {
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }

        }
    }
    return 0;
}