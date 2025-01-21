/*
https://codeforces.com/problemset/problem/1304/B#:~:text=Returning%20back%20to%20problem%20solving,string%20is%20also%20a%20palindrome.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t,len;
    cin>>t>>len;
    map<string,int>mp;
    vector<string>v;
    while(t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        mp[s]++;
    }
    deque<string>ans;
    map<string,int>ansmp;
    map<string,int>doub;
    map<string,int>sing;
    for(int i=0;i<v.size();i++){
        string dami = v[i];
        reverse(dami.begin(),dami.end());
        if(dami==v[i]){
            // ans.push_back(v[i]);
            ansmp[v[i]]++;
            sing[v[i]]++;
        }else if(mp[dami]>0){
            ansmp[v[i]]++;
            doub[v[i]]++;
        }
    }
    
   
    if(doub.empty() && sing.empty()){
        cout<<0<<endl;
    }else{
         int curpos=0;
         if(!doub.empty()){
            for(auto it= doub.begin();it!=doub.end();it++){
                // cout<<it->first<<" -> "<<it->second<<endl;
                 string d=it->first;
                reverse(d.begin(),d.end());
                 if(doub[it->first]!=0 && doub[d]!=0){ 

                    ans.push_front(it->first);


                    ans.push_back(d);
                    curpos++;
                    doub[it->first]=0;
                    doub[d]=0;
                }
            }
        }
           
            if(!sing.empty())
               ans.insert(ans.begin()+curpos,sing.begin()->first);
         
            cout<<ans.size()*len<<endl;
            for(auto it = ans.begin();it!=ans.end();it++){
                cout<<*it;
            }

    }
   
    return 0;

}

