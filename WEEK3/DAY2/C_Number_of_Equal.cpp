// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     map<int,int>a;
//     map<int,int>b;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         a[x]++;
//     }
    
//     for(int i=0;i<m;i++){
//         int x;
//         cin>>x;
//         b[x]++;
//     }
//     long long int cnt=0;
//     for(auto i=a.begin(), j = b.begin();i!=a.end() && j!=b.end();i++,j++){
//         int vala = i->first;
//             // cout<<a[vala]<<" "<<b[vala]<<endl;
//             cnt=cnt+ (1LL * a[vala]*b[vala]);
//             // cout<<cnt<<" ";
//     }
//     // cout<<endl;
//     cout<<cnt<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    long long  ans=0;

    while(l<n && r<m)
    {
        int curr = a[l];
        int cnt1=0,cnt2=0 ;

        while(l<n && curr==a[l]){
            l++;
            cnt1++;
        }

        while(r<m && curr>b[r]){
            r++;
        }

        while(r<m && curr==b[r]){
            r++;
            cnt2++;
        }
        ans= ans+ (1LL*cnt1 *cnt2 );
    }
    cout<<ans<<endl;
    return 0;
}