#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        deque<int>v(n);
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll cnt=0;
        if(sum==s){
            cout<<"0\n";
        }else if(sum>s) {
            ll l=0,r=n-1;
            while(l<r){
                if(sum==s){
                    break;
                }
                ll fi = sum-v[l];
                ll se = sum - v[r];
                if(fi<sum){
                    l++;
                    sum=sum-fi;
                    cnt++;
                }else if(se<sum){
                    r--;
                    sum=sum-se;
                    cnt++;
                }else if(fi==se){
                    ll onelast=0;
                    ll onefirst = 0;
                    for(int i=r;i>=l;i--){
                        if(v[i]==1){
                            break;
                        }
                            onelast++;

                    }

                    for(int i=l;i<r;i++){
                        if(v[i]==1){
                           
                            break;
                        }
                         onefirst++;
                    }

                    cout<<"l = "<<l<<" r = "<<r<<" onefirst = "<<onefirst<<" onelast = "<<onelast<<endl<<endl;

                    if(onefirst<onelast){
                        l++;
                        sum=sum-v[l];
                        cnt++;
                    }else{
                        r--;
                        sum=sum-v[r];
                        cnt++;
                    }

                }
            }
            cout<<cnt<<endl;
        } else if(sum<s){
            cout<<"-1\n";
        }   

    }
    return 0;
}