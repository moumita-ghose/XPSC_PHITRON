/*
link : https://www.codechef.com/problems/MNR
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
        deque<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
      
        sort(v.begin(),v.end()); //choto
          deque<int>v2=v;
          deque<int>v3=v;
        int mx1 = v.back();
        int mx2= v[n-2];
      
        int mn1 = v.front();
        int mn2 = v[1];
        // cout<<mx1<<" "<<mx2<<endl<<endl;
       auto it = find(v.begin(),v.end(), mx1);
       if(it!=v.end()){
        v.erase(it);
       }
       auto it2 = find(v.begin(),v.end(), mx2);
       if(it2!=v.end()){
        v.erase(it2);
       }

      int afmx1 = *max_element(v.begin(),v.end());
      int afmn1 = *min_element(v.begin(),v.end());

      int ans1 = afmx1 - afmn1;


        auto it3 = find(v2.begin(),v2.end(),mn1);
        v2.erase(it3);
        auto it4 = find(v2.begin(),v2.end(),mn2);
        v2.erase(it4);

        int afmx2 = *max_element(v2.begin(),v2.end());
        int afmn2 = *min_element(v2.begin(),v2.end());
        int ans2 = afmx2-afmn2;

        auto it5 = find(v3.begin(),v3.end(),v3[0]);
        v3.erase(it5);

        auto it6 = find(v3.begin(),v3.end(),v[n-1]);
        v3.erase(it6);

        int afmx3 = *max_element(v3.begin(),v3.end());
        int afmn3 = *min_element(v3.begin(),v3.end());

        int ans3 = afmx3-afmn3;
        
        int o = min(ans1,ans2);
        cout<<min(o,ans3)<<endl; 

        // cout<<min(ans1,ans2,ans3)<<endl;


    }
    return 0;
}