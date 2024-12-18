/*
https://www.codechef.com/problems/STRAME?tab=statement
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
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                z++;
            else
                o++;
        }
        int mn = min(z,o);
        if(mn%2==0){
            cout<<"Ramos\n";
        }else{
            cout<<"Zlatan\n";
        }
    }

    return 0;
}