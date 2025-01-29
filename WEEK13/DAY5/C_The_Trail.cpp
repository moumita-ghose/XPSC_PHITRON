/*
https://codeforces.com/contest/2055/problem/C
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        ll arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        bool checkzero=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout<<arr[i][j]<<" ";
                if(arr[i][j]!=0){
                    checkzero=false;
                //    cout<<arr[i][j]<<" ";
                    break;
                }
            }
        }
          if(checkzero==true){
             for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }
        }else{
 
             vector<ll>sumrow(n);
            for(int i=0;i<n;i++){
                ll sum=0;
                for(int j=0;j<m;j++ ){
                    sum=sum+arr[i][j];
                }
                sumrow[i]=sum;
            }
            vector<ll>sumcol(m);
            for(int i=0;i<m;i++){
                ll sum=0;
                for(int j=0;j<n;j++){
                sum=sum+ arr[j][i];
                }
                sumcol[i]=sum;
            }
        
            int row=0,col=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='D'){
                    arr[row][col]=sumrow[row]*(-1);
                    sumcol[col]=sumcol[col]+ (sumrow[row]*(-1));   
                    sumrow[row]+=sumrow[row]*(-1);
                    row++;
 
                }else{
                    arr[row][col]=sumcol[col]*(-1);
                    sumrow[row]+=sumcol[col]*(-1);
                    sumcol[col]+=sumcol[col]*(-1);
                    col++;
                }
            }
            int lastro,lastcol;
            // cout<<"row : ";
            for(int i=0;i<n;i++){
                if(sumrow[i]!=0){
                    lastro=i;
                }
                // cout<<sumrow[i]<<" ";
            }
            // cout<<"\ncol: ";
            for(int i=0;i<m;i++){
                if(sumcol[i]!=0){
                    lastcol=i;
                }
                // cout<<sumcol[i]<<" ";
            }
            arr[lastro][lastcol]=sumrow[lastro]*(-1);
            sumrow[lastro]+=sumrow[lastro]*(-1);
            sumcol[lastcol]+=sumcol[lastcol]*(-1);
            // cout<<"\n\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }
            // cout<<"\n\n";
        }
 
    }
  
    return 0;
}