/*
link : https://codeforces.com/problemset/problem/1722/B
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
        string  s1,s2;
        cin>>s1>>s2;
        string news1,news2;
        for(int i=0;i<n;i++){
            if(s1[i]=='G'){
                news1.push_back('B');
            }else{
                news1.push_back(s1[i]);
            }

            if(s2[i]=='G'){
                news2.push_back('B');
            }else{
                news2.push_back(s2[i]);
            }
        }

        if(news1==news2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}