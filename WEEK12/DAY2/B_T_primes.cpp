/*
https://codeforces.com/problemset/problem/230/B
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void optimize(){ 
   ios::sync_with_stdio(false); 
   cin.tie(nullptr); 
}
bool isPrime(ll n)
{
    if(n==1){
        return false;
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool isPerfectSqu(ll n)
{
    ll sq = sqrtl(n);
    if( (sq*sq )==n ){
        return true;
    }else{
        return false;
    }
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(isPerfectSqu(n)==true && isPrime(sqrtl(n))==true){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
      
    }
    return 0;
}