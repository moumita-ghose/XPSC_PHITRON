/*
problem link : https://www.codechef.com/problems/RCBCSK
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rcb,csk;
    cin>>rcb>>csk;
    if(csk>=rcb){
        cout<<"CSK\n";
    }else if (rcb>csk){
        int dif = rcb-csk;
        if(dif>=18){
            cout<<"RCB\n";
        }else{
            cout<<"CSK\n";
        }
    }
    return 0;
}