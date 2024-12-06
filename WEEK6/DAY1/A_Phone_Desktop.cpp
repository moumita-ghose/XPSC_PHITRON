#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int cnt = ceil( ( y*1.0 ) /2 );
        int remain = (y/2)*7 + ((y%2)*11);
        int st = max(0,x - remain);
        cnt= cnt + ceil((st*1.0)/15);
        cout<<cnt<<endl;
    }
    return 0;
}