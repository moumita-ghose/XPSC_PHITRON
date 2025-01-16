/*
https://codeforces.com/problemset/problem/1974/C
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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<tuple<int,int,int>>tp;

        for(int i=0;i<n-2;i++){
            tuple<int,int,int>x = {v[i],v[i+1],v[i+2]};
            tp.push_back(x);
        }


        map<pair<int,int>, multiset<int> >mp12;
        map<pair<int,int>, multiset<int> >mp23;
        map<pair<int,int>, multiset<int> >mp13;
        /*
        pos 12,23,13
        */

       // 1 2
       int ans=0;
        for(auto it = tp.begin();it!=tp.end();it++){
            tuple<int,int,int>cur = *it;
            int pos1 = get<0>(cur);
            int pos2 = get<1>(cur);
            int pos3 = get<2>(cur);
            pair<int,int>p={pos1,pos2};
            mp12[p].insert(pos3);

        }

        //2 3
        for(auto it = tp.begin();it!=tp.end();it++){
            tuple<int,int,int>cur = *it;
            int pos1 = get<0>(cur);
            int pos2 = get<1>(cur);
            int pos3 = get<2>(cur);
            pair<int ,int>p = {pos2,pos3};
            mp23[p].insert(pos1);
        }
        // ans 12
        map<tuple<int,int,int>,int>freq12; // count
         
        for(auto it = tp.begin();it!=tp.end();it++){
            tuple<int,int,int>cur = *it;
            int p1 = get<0>(cur);
            int p2 = get<1>(cur);
            int p3 = get<2>(cur);
             pair<int,int>curp={p1,p2};
            multiset<int>ml = mp12[curp] ;
          
           int cnt = 0;
           if(freq12[cur]==0){
                for(auto it2 = ml.begin();it2!=ml.end();it2++){
                    if(p3!=*it2){
                        cnt++;
                    }
                }
                freq12[cur]++;
            }
            ans=ans+(cnt);
        }

        //ans 23
        map<tuple<int,int,int>,int>freq23; // count
        for(auto it = tp.begin();it!=tp.end();it++){
            tuple<int,int,int>cur=*it;

            int p1 =get<0>(cur);
            int p2 =get<1>(cur);
            int p3 =get<2>(cur);
            int cnt =0;
            pair<int,int>p={p2,p3};
            multiset<int>ml = mp23[p];
            if(freq23[cur]==0){
                for(auto it2=ml.begin();it2!=ml.end();it2++){
                    if(p1!=*it2){
                        cnt++;
                    }
                }
                freq23[cur]++;
            }
            ans = ans+(cnt);
        }
        // 13
        // for(auto )

        cout<<ans<<endl;
     
    }
    return 0;
}