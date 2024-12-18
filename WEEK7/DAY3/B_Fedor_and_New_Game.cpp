/*
https://codeforces.com/problemset/problem/467/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<__lg(1001)<<endl;
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<m+1;i++){
        cin>>v[i];
    }
    int b = v.back();
    deque<int> bs ;
    for(int i= n-1;i>=0;i--){
        bs.push_back(((b>>i)&1));
    }
    if(bs.size()<n-1){
        int d= (n-1)-bs.size();
        for(int i=0;i<d;i++ ){
            bs.push_front(0);
        }
    }
    cout<<b<<" -> ";
    for(int i= 0;i<bs.size();i++){
       cout<<bs[i]<<" ";
    }
    cout<<endl;


    int df=0,ans=0;
    for(int j=0;j<m+1;j++){
         deque<int> s;
        for(int i=n-1;i>=0;i--){
            
            s.push_back(((v[j]>>i)&1));
        }

        if(s.size()<n-1){
            for(int i=0;i<( (n-1) - s.size() ) ;i++){
                s.push_front(0);
            }
        }
        cout<<v[j]<<" -> ";
         for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
         }
         cout<<endl;
         for(int i=0;i<n;i++){
            if(s[i]!=bs[i]){
                df++;
            }
         }

         if(df<=k){
            ans++;
         }
    }
    cout<<ans<<endl;
    return 0;
}


// 17 -> 1 0 0 0 1 
// 8 ->  0 0 0 1 0 
// 5 ->  1 0 1 0 0 
// 111-> 1 1 1 1 0 
// 17 -> 1 0 0 0 1 
// 17 ->  0 0 1 0 0 0 
// 8 ->   0 0 0 1 0 0 0 
// 5 ->   0 0 0 0 1 0 1 
// 111 -> 1 1 0 1 1 1 1 
// 17 ->  0 0 1 0 0 0 1 

