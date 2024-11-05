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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=n-1;
        int cnt=0;
        set<int>st;
        while(l<r){
           
            st.insert(v.begin()+l,v.begin()+r);
            int currmin = *st.begin();
            int curmax = *st.rbegin();
            if(v[l]==curmax || v[l]==currmin){
                l++;
            }else if(v[r]==currmin || v[r]==curmax){
                r--;
            }else{
                break;
            }
            cnt++;
        }
        if(l>=r || cnt == n ){
            cout<<"-1\n";
        }else{
            cout<<l+1<<" "<<r+1<<endl;
        }
        
    }
     
     
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
        
//         int l = 0, r = n - 1;

//         // Move `l` rightwards and `r` leftwards to avoid boundary elements being min or max.
//         while (l < r) {
//             int current_min = *min_element(v.begin() + l, v.begin() + r + 1);
//             int current_max = *max_element(v.begin() + l, v.begin() + r + 1);
            
//             if (v[l] == current_min || v[l] == current_max) {
//                 l++;
//             } else if (v[r] == current_min || v[r] == current_max) {
//                 r--;
//             } else {
//                 // Valid segment found
//                 break;
//             }
//         }

//         // If no valid segment was found
//         if (l >= r) {
//             cout << "-1\n";
//         } else {
//             cout << l + 1 << " " << r + 1 << endl;  // Convert to 1-based indexing
//         }
//     }

//     return 0;
// }
