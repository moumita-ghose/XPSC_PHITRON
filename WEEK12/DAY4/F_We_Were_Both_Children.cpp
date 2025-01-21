// /*
// https://codeforces.com/contest/1850/problem/F
// */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         map<ll,int>mp;
//         vector<ll>input(n);
//         for(int i=0;i<n;i++){
//             cin>>input[i];
//             mp[input[i]]++;
//         }

//         if(n==1){
//             if(input.back()>n){
//                 cout<<0<<endl;
//             }else if(input.back()<=n){
//                 cout<<n<<endl;
//             }
//             continue;
//         }

//         // for(auto it = mp.begin();it!=mp.end();it++){
//         //     cout<<it->first<<" -> "<<it->second<<endl;
//         // }
        
//         map<ll,ll>ans;
//         for(int i=0;i<n;i++){
//             if(input[i]<=n){
//                 ll x=input[i];
                    
//                     ll tmp = x;
//                     map<ll,ll>mp2;
//                     for(int i=2;i*i<=x;i++){
//                         if(x%i==0){
//                             while(x%i==0){
//                                 mp2[i]++;
//                                 x=x/i;
//                             }
//                         }
//                     }
//                     if(x>1){
//                         mp2[x]++;
//                     }
//                     set<ll>v;
//                     for(auto it = mp2.begin();it!=mp2.end();it++){
//                         ll x = it->second;
//                         for(int i=1;i<=x;i++){
//                             v.insert(pow(it->first,i));
//                         }

//                     }
//                     vector<ll>dv;
//                     for(auto it = v.begin();it!=v.end();it++){
//                         dv.push_back(*it);
//                     }
//                     vector<ll>alldv;
//                     set<ll>unique_dv;
                    
//                     for(int i=0;i< (1<<dv.size()) ;i++){
//                         ll product=1;
//                         for(int j=dv.size()-1;j>=0;j--){
//                             if(( (i>>j )&1)==1){
//                                product=product* dv[j];
//                             }

//                         }
//                         if(tmp%product==0){
//                             // alldv.push_back(product);
//                             unique_dv.insert(product);
//                         }
//                     }
//                     alldv.insert(alldv.end(),unique_dv.begin(),unique_dv.end());
//                     ll sum=0;
//                     // cout<<input[i]<<" -> ->";
//                     for(int i=0;i<alldv.size();i++){
//                         // cout<<alldv[i]<<"-> ";
//                        ll s = mp[alldv[i]];
//                        sum=sum+s;
//                     //    cout<<sum<<" ";
//                     //    cout<< alldv[i] <<" ";
//                     }
//                     ans[input[i]]=sum;
//                     // cout<<endl;
//              }
//         }
//         ll mxans=0;
//         for(auto it = ans.begin();it!=ans.end();it++){
//             // cout<<it->first<<" -> "<<it->second<<endl;
//             mxans=max(mxans,it->second);
//         }
//         cout<<mxans<<endl;
//         // cout<<endl<<endl;
    
//     }   

//     return 0;
// }

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
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>cnt;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n){
                v.push_back(x);
                cnt[x]++;
            }
        }
        if(v.size()==0){
            cout<<0<<endl;
            continue;
        }
        // for(auto it = cnt.begin();it!=cnt.end();it++){
        //     cout<<it->first<<" -> "<<it->second<<endl;
        // }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int curcnt=0;
            for(int x = 1;x*x<=i;x++){
                if(i%x==0){
                    curcnt=curcnt+cnt[x];
                    if(x*x!=i){
                        curcnt=curcnt+cnt[i/x];
                    }
                }
            }
            ans=max(ans,curcnt);
        }
        cout<<ans<<endl;
        // cout<<endl;
        // sort(v.begin(),v.end());
        
      
    }
    return 0;
}

