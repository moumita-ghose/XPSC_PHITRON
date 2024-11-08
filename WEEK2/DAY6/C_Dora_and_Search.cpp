/*
link : https://codeforces.com/problemset/problem/1793/C
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
        int v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int low = 0,hi = n-1;
        int mn = 1,mx = n;
        bool flag = false;

        while(low<=hi){
            if((v[low]==mn && v[hi]==mx) || (v[low]==mx && v[hi]==mn)){
                low++;
                hi--;
                mn++;
                mx--;
            }else if(v[low]== mn ){
                low++;
                mn++;
            }else  if(v[low]==mx){
                low++;
                mx--;
            }else if(v[hi]==mn){
                hi--;
                mn++;
            }else if(v[hi]==mx){
                hi--;
                mx--;
            }else{
                cout<<low+1<<" "<<hi+1<<endl;
                flag = true;
                break;
            }

        }
        if(flag==false){
            cout<<-1<<endl;
        }
    }
    return 0;
}