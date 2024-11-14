/*
linnk : https://www.codechef.com/problems/CHOLY
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    // cout<<y*0.5<<endl;
    float fav=0.0,opp=0.0;
    fav = fav+x+0.5*y;
    opp =  opp+y*0.5 + z;

    int remain = 4-(x+y+z);
    fav=fav+remain;

    if(fav>opp){
        cout<<"YES";
    }else{
        cout<<"NO";
    } 
    return 0;
}