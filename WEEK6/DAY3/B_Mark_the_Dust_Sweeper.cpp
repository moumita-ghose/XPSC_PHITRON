// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         reverse(v.begin(),v.end());
//         while(!v.empty() && v.back()==0){
//             v.pop_back();
//         }
//         if(v.empty()){
//             cout<<0<<endl;
//             continue;
//         }
//         ll  ans =0;
//         reverse(v.begin(),v.end());

//         for(int i=0;i<v.size();i++){
//             if(v[i]==0 ){
//                 ans++;
//             }else{
//                 ans+=v[i];
//             }
//         }
//         cout<<ans<<endl;

//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#define ll long long

using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ll ans = 0;
    int ptr = 0;
    while(ptr < n && a[ptr] == 0)
        ptr++;
    for(int i = ptr; i < n-1; ++i){
        ans += a[i];
        if(a[i] == 0) ans++;
    }
    cout << ans << "\n";
}
int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}