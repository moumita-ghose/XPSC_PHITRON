#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        ll arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        map<pair<int,int>,int>mp;
        vector<pair<int,int>>path;
        int r=0,col=0;
        path.push_back({0,0});
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                r++;
                pair<int,int>p={r,col};
                path.push_back(p);
            }else{
                col++;
                pair<int,int>p={r,col};
                path.push_back(p);
            }
        }
        cout<<"Row -> col :\n";
        for(int i=0;i<path.size();i++){
            cout<<path[i].first<<"-> "<<path[i].second<<"\n";
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // } 
        cout<<"\n\n";
  }
  
    return 0;
}