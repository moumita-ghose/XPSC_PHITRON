#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k ;
    cin>>k;
    while(k--)
    {
        ll lo,hi;
        cin>>lo>>hi;

        //lowerind
        int lowerind=-1,l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]>=lo){
                lowerind=mid;
                r=mid-1;
            }else if(v[mid]<lo){
                l=mid+1;
            } 
            
        }

        int mid2, higherind=-1;
        l=0,r=n-1;
        while(l<=r){
            mid2=(l+r)/2;
            if(v[mid2]<=hi){
                higherind=mid2;
                l=mid2+1;
            // }else if(v [mid2]<hi){
            //     higherind=mid2;
            //     l=mid2+1;
            }else  if(v[mid2]>hi) {
                r=mid2-1;
            }
        }
        if(lowerind!=-1 && higherind!=-1&& lowerind<=higherind){
            lowerind++;
            higherind++;
            cout<<(higherind-lowerind)+1<<" ";
        }else{
                cout<<0<<" ";
        }   
        // cout<<lowerind<<" -> "<<higherind<<endl;
    }

    return 0;
}