/*
problem link : https://codeforces.com/problemset/problem/1927/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start =-1,end =-1,cnt =1;
        for(int i =0;i<s.length();i++){
            if(s[i]=='B'){
                start =i;
                break;
            }
        }
        
        for(int i =start+1;i<s.length();i++){
            if(s[i]=='B' && i!=start){
                end = i;
            }
        }
        // cout<<start<<" " <<end<<"\n";
        // for(int i=start;i<s.length();i++){
        //     if(s[i])
        // }
        if(start!=-1 && end!=-1){
           for(int i =start;i<end;i++){
                cnt++;
           }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

