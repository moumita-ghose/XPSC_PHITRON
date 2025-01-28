// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 

// bool possible(vector<ll>v, ll c,ll d,ll k,int n)
// {
//     ll sum=0,gain=0;
//     if(k==0){
//        return (v[0]*d>=c);
//     }
//     if(k<n){
//         for(int i=0;i<k;i++){
//             sum=sum+v[i];
//         }
//     }else{
//         for(int i=0;i<n;i++){
//             sum=sum+v[i];
//         }
//     }
//     ll tme = d/k;
//     ll extra = d%k;
    
//     ll extrasum=0;
//     if(extra>n){
//         for(int i=0;i<n;i++){
//             extrasum=extrasum+v[i];
//         }
//     }else{
//         for(int i=0;i<extra;i++){
//             extrasum=extrasum+v[i];
//         }
//     }
//     gain= ( sum * tme ) + extrasum ;
//    return (gain>=c);
// }


// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         ll c,d;
//         cin>>n>>c>>d;
//         vector<ll>v(n);
//         ll totalsum=0;
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             totalsum=totalsum+v[i];
//         }
//         sort(v.begin(),v.end(),greater<ll>() );
//         if(v[0]>c){
//             cout<<"Infinity\n";
//             continue;
//         }
//             ll l=0,r=(ll)1000000000000,ans=-1;
//             while(l<=r){
//                 // ll mid=(l+r)/2;
//                 ll mid = l+(r-l)/2;
//                 if(possible(v,c,d,mid+1,n)==true){
//                     ans=mid;
//                     l=mid+1;
//                 }else{
//                     r=mid-1;
//                 }
//             }
//             if(ans==-1){
//                 cout<<"Impossible\n";
//             }else{
//                 cout<<ans<<"\n";
//             }
            
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
 
 
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 
bool Possible(vector<ll> a,ll n,ll d,ll c,ll k){
    if(k==0){
        return (a[0]*d>=c);
    }
    ll sum=0,gain=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
    }
    else{
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
    }
 
    ll times=d/k;
 
    gain=times*sum;
 
    ll rem=d%k;
 
    if(rem>=n){
        for(int i=0;i<n;i++){
            gain+=a[i];
        }
    }
    else{
        for(int i=0;i<rem;i++){
            gain+=a[i];
        }
    }
 
    return (gain>=c);
}
 
 
int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        ll c,d;                 cin>>c>>d;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a.begin(),a.end(),greater<ll>());
        ll total=0;             
        for(int i=0;i<min(n,(int)d);i++){
            total+=a[i];
        }
        if(total>=c){
            cout<<"Infinity"<<endl;
            continue;
        }
 
        ll ans=-1,low=0,high=(ll)1000000000000;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(Possible(a,n,d,c,mid+1)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
 
        if(ans==-1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}