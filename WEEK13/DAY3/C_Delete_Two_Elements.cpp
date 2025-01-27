// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         ll totsum=0;
//         map<int,int>mp;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             mp[v[i]]++;
//             totsum=totsum+v[i];
//         }
//         // sort(v.begin(),v.end());
//         if((totsum*2)%n!=0){
//             cout<<0<<"\n";
//         }else{
//             ll trgt=(2*totsum)/n;
//             // cout<<trgt<<": \n";
//             ll cnt=0; 
//             for(int i=0;i<n;i++){
//                 ll nd = trgt-v[i];
//                 if(mp[nd]!=0){
//                     cnt=cnt+mp[nd];
//                     if(v[i]==nd){
//                         cnt--;
//                     }
//                     // cout<<nd<<"-> " <<mp[nd]<<  "\n";              
//                 }
//             }
//             cout<<cnt/2<<"\n";
//         }
//         // cout<<"\n\n";
//     }
//     return 0;
// }

// /*
// https://cses.fi/problemset/result/11591284/
// */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    map<int, int> cnt;
    for (auto &x : a) {
      scanf("%d", &x);
      cnt[x] += 1;
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if ((2 * sum) % n != 0) {
      puts("0");
      continue;
    }
    long long need = (2 * sum) / n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      int a1 = a[i];
      int a2 = need - a1;
      if (cnt.count(a2)) ans += cnt[a2];
      if (a1 == a2) ans -= 1;
    }
    printf("%lld\n", ans / 2);
  }
}