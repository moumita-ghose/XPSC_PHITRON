// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,m;
//         cin>>n>>m;
//         string a,b;
//         cin>>a>>b; 
//         int cnt=0;
//         int l=0,r=0;
//         for(int i=0;i<a.size();i++){
//             if(r==b.size()){
//                 break;
//             }
//             while(l<=r){
//                  if(r==b.size()){
//                     break;
//                 }
//                 if(a[i]==b[r]){
//                     // cout<<l<<" -> "<<r<<endl;
//                     l=r+1;
//                     r=r+1;
//                     cnt++;
//                     break;
//                 }else{
//                     r++;
//                 }
//             }
//         }
//         // cout<<endl;
//         cout<<cnt<<endl;
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
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int cnt =0,aind=0;;
        for(int i=0;i<b.size();i++){
            if(a[aind]==b[i]){
                aind++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

