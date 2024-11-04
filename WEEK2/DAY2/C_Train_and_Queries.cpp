/*

link : https://codeforces.com/problemset/problem/1702/C
 */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        map<int,set<int>>mp;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            mp[val].insert(i);
        }

        while(q--){
            int st,en;
            cin>>st>>en;

            if(mp.find(st)==mp.end() || mp.find(en)==mp.end()){
                cout<<"NO\n";
            }else{
                int f = *mp[st].begin();
                int l = *mp[en].rbegin();
                if(f<l){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}