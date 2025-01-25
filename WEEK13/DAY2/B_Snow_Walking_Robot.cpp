/*
https://codeforces.com/problemset/problem/1272/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>cnt;
        for(int i=0;i<s.size();i++){
            cnt[s[i]]++;
        }
        if(cnt.size()==2){
            if(cnt['L']!=0 && cnt['R']!=0){
                cout<<2<<"\n";
                cout<<"LR\n";
            }else if(cnt['U']!=0 && cnt['D']!=0){
                cout<<2<<"\n";
                cout<<"UD\n";
            }else{
                cout<<0<<"\n";
            }
               
        }else{

            int sizeofLR=min( cnt['L'],cnt['R'] );
            int sizeofDU=min(cnt['D'],cnt['U']);

            string ans;
            map<char,int>mp;
            for(int i=1;i<=sizeofLR;i++){
                // cout<<'L';
                ans.push_back('L');
                mp['L']++;
            }
            for(int i=1;i<=sizeofDU;i++){
                // cout<<'U';
                ans.push_back('U');
                mp['U']++;
            }
            for(int i=1;i<=sizeofLR;i++){
                ans.push_back('R');
                mp['R']++;
            }
            for(int i=1;i<=sizeofDU;i++){
                ans.push_back('D');
                mp['D']++;
            }
            if(ans.size()==0){
                cout<<0<<'\n';
            }else{
                if(mp.size()==2){
                    if(mp['L']!=0  && mp['R']!=0){
                        cout<<2<<"\nLR\n";
                    }else if(mp['U']!=0 && mp['D']!=0){
                        cout<<"2\nUD\n";
                    }else{
                        cout<<0<<"\n";
                    }
                }else if(mp.size()>2){
                    cout<<ans.size()<<"\n";
                    cout<<ans<<"\n";
                }
            }
            // cout<<endl;

        }
       

    }
    return 0;
}

