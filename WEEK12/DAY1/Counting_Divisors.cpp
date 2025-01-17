/*

https://cses.fi/problemset/task/1713/

*/

#include<bits/stdc++.h>
using namespace std;
 const int ra = 1e6+10;

int main()
{

    
   
    vector<int>div(ra+1);
    for(int i=1;i<=ra;i++){
        for(int j=i;j<=ra;j=j+i){
            div[j]++;
        }
    }
   

    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<div[x]<<endl;
    }
    return 0;
}