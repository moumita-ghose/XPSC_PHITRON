#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>st;
    vector<int>cnt(n+1);
    for(int i=n-1;i>=0;i--){
        st.insert(v[i]);  
        cnt[i]=st.size();
    }

    while(m--)
    {
        int l;
        cin>>l;
        l--;
        cout<<cnt[l]<<endl;
    }


    return 0;
}