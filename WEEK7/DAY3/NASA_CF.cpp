/*
https://www.codechef.com/problems/PALIXOR
*/
#include<bits/stdc++.h>
using namespace std;
int sz = (1LL << 15);
vector<int>svPl;
bool  isPalindrome(int x)
{
    string s = to_string(x) ;
    string t = s;
    reverse(t.begin(),t.end());
    if(s==t){
        return true;
    }else{
        return false;
    }
}

void markPalindrome(){
    for(int i=0;i<sz;i++){
        if(isPalindrome(i)){
            svPl.push_back(i);
        }
    }
}
int main()
{

    markPalindrome();
   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n), cnt(sz+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;
        }
        long long int ans =n;
        for(int i=0;i<n;i++){
            for(int j=0;j<svPl.size();j++){
               int xr = v[i]^svPl[j];
                ans+=cnt[xr];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}