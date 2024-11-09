/*
link : https://codeforces.com/problemset/problem/1622/B
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
        vector<int>cpy(n);
        map<int,int>mp; // val,ind;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=i;
        }
        cpy=v;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string s;
        cin>>s;
        
        set<int>zero;
        set<int>one;

        for(int i=0;i<n;i++){
            int x = s[i]-'0';
            if(x==0){
               zero.insert(i);
            }else 
            {
                one.insert(i);
            }
        }

        vector<int>oneind;
        vector<int>zeroind;

        for(auto it = one.begin();it!=one.end();it++){
            // oneind.insert(cpy[*it]);
            oneind.push_back(cpy[*it]);
        }
        
        for(auto it = zero.begin();it!=zero.end();it++){
            zeroind.push_back(cpy[*it]);
        }
        sort(oneind.begin(),oneind.end());
        reverse(oneind.begin(),oneind.end());

        sort(zeroind.begin(),zeroind.end());
        reverse(zeroind.begin(),zeroind.end());
    //    cout<<"zero:->\n";
    //     for(auto it = zeroind.begin();it!=zeroind.end();it++){
    //         cout<<*it<<" ";
    //     }

    //     cout<<endl;
    //    cout<<"one:->\n";
    //     for(auto it = oneind.begin();it!=oneind.end();it++){
    //         cout<<*it<<" ";
    //     }

    //     cout<<endl;
        
    //     cout<<endl<<endl;
        int indV=0;
        int onesz = oneind.size();
        for(int i=0;i<onesz;i++){
            
            int d = mp[oneind[i]];

            cpy[d] = v[indV];
            indV++;
        }
        int zerosz = zeroind.size();
        for(int i=0;i<zerosz;i++){
            int d = mp[zeroind[i]];
            cpy[d] = v[indV];
            indV++;
        }
        for(int i=0;i<cpy.size();i++){
            cout<<cpy[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}