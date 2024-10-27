#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b){
        int ans = (b-a)+1;
        cout<<ans<<endl; 
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}