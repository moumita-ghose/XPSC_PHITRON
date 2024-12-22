// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     string sub = "aab";
//     string ans;
//     int ind =0;
//     for(int i=0;i<n;i++){
//         if(ind==3){
//             ind=0;
//         }
//         // cout<<ind<<" ";
//         ans.push_back(sub[ind]);
//         ind++;
//     }
//     // cout<<endl;    
//     cout<<ans<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
         int n;
    cin>>n;
    
    string sub = "aabb";
    for(int i=0;i<n;i++){
        cout<<sub[i%4];
    }
    cout<<endl;

    return 0;
}