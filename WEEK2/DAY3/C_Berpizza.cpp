/*
link :https://codeforces.com/problemset/problem/1468/C 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int ind =1;
    vector<int>ans;
    set<pair<int,int>>poly;
    multiset<pair< int,int>>mono;
    while(q--)
    {
        int type;
        cin>>type;

        if(type==1){
            int money ;
            cin>>money;
            poly.insert({ind,money});
            mono.insert({money,-ind});
            ind++;
        }else if(type==2){
            int pos = poly.begin()->first, money = poly.begin()->second;
            ans.push_back(pos);
            poly.erase({pos,money});
            mono.erase({money,-pos});
        }else{
            int money = mono.rbegin()->first, pos = -mono.rbegin()->second;
            ans.push_back(pos);
            poly.erase({pos,money});
            mono.erase({money,-pos});
    }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}