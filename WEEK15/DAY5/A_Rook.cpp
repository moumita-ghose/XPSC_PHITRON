#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>dx={-1,0,1,0};
    vector<int>dy={0,1,0,-1};

    int n;
    cin>>n;
    while(n--){
        string  s;
        cin>>s;
    
        int col=s[0]- 'a'+1 ;
        int row = s[1]-'0';
        int arr[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<4;i++){
            int x = dx[i];
            int y = dy[i];
            int finalx=x+row;
            int finaly = y+col;
            
            while(finalx>=1 && finalx<=8 && finaly>=1 && finaly<=8){
                arr[finalx][finaly]=1;
                finalx+=dx[i];
                finaly+=dy[i];
            }
        }
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                // cout<<arr[i][j]<<" ";
                if(arr[i][j]==1){
                    cout<<char(j-1+'a')<<i;//<<"\n";
                    // cout<<"("<<i<<" "<<j<< " )";
                    pr
                }
            }
            // pr
        }
        pr
    }
return 0;
}