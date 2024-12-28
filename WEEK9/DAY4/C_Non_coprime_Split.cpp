// https://codeforces.com/problemset/problem/1872/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int isNotPrime(int n){
    if(n==1){
        return n;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(r<=3){
            cout<<-1<<endl;
        }else if(l!=r){
            if(r%2==1){
                r--;
            }
            cout<<2<<" "<<r-2<<endl;
        }else if(l==r){
            int x = isNotPrime(l);
            if(x==l){
                cout<<-1<<endl;
            }else {
                cout<<x<<" " <<l-x<<endl;
            }
        }


    }
    return 0;
}