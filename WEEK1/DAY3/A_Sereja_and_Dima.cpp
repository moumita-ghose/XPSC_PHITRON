/*
problem link : https://codeforces.com/contest/381/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++)
    {
        cin>>dq[i];
    }
    int se=0,de=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1){
            int b= dq.back();
            int f= dq.front();
            if(b>f){
                se=se+b;
                dq.pop_back();
            }else{
                se=se+f;
                dq.pop_front();
            }
        }else{
            int b = dq.back();
            int f= dq.front();
            if(b>f){
                de=de+b;
                dq.pop_back();
            }else{
                de=de+f;
                dq.pop_front();
            }
        }
    }
    cout<<se<<" "<<de<<endl;
   
    return 0;
}