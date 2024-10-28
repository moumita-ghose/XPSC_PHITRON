/*
link : https://codeforces.com/contest/44/problem/A
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin>>n;
//     int cnt = 0;
    
//     // pair<string,string>p[n];
    
//     // for(int i=0;i<n;i++)
//     // {
//     //     cin>>p[i].first>>p[i].second;
//     // }
//     // // for(int i=0,j =1;i<n-1&&j<n;i++,j++){
//     // //         if(p[i].first != p[j].first && p[i].second!=p[j].second){
//     // //             cnt=cnt+2;;
//     // //         }
//     // // }
//     // // if(cnt==0) cout<<"1"<<endl;
//     // // else  cout<<cnt<<endl;

//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<n;j++){
//     //         if(i==j){
//     //             continue;
//     //         }
//     //         if(p[i].first !=p[j].first && p[i].second!=p[j].second){
//     //             cnt++;
            
//     //         }
//     //         // cout<<i<<" "<<j<<endl;
//     //     }
//     // }
//     // // cout<<cnt<<endl;
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int n;
    cin>>n;
    set<pair<string,string>>st[n];
    for(int i=0;i<n;i++){
        string gen,col;
        cin>>gen>>col;
        st->insert({gen,col});
    }
    cout<<st->size()<<endl;
    return 0;
}

