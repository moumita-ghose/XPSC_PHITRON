/*
https://codeforces.com/problemset/problem/1783/B
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int i=1,j=n*n;
        // cout<<(n*n)/2<<endl;
        while(i<=j)
        {
            if((n*n)%2==1 && i==((n*n)/2)+1){
                v.push_back(i);
            }else{
                v.push_back(i);
                v.push_back(j);
            }
            i++;
            j--;
        }


            // for(int i=0;i<v.size();i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl<<endl;

        int k = 0,cnt=1;
        for( i=0;i<n;i++){
            // cout<<v[i]<<" ";
            if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<v[k]<<" ";
                    k++;
                }
                // k=k+n;
                cout<<endl;//<<k<<endl;
            }else if(i%2==1) {
                vector<int>tmp;
                for(int j=0;j<n;j++){
                    tmp.push_back(v[k]);
                    k++;
                }
                reverse(tmp.begin(),tmp.end());
                for(int m=0;m<n;m++){
                    cout<<tmp[m]<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl<<endl;
        
    }
    return 0;
}
