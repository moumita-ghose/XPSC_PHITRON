#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<bool>prime(n+1,true);
    for(int i=2;i<=n;i++){
       if(prime[i]==true){
            for(int j=i+i;j<=n;j=j+i){
                if(j%i==0){
                    prime[j]=false;
                }
            }
        }
    }
    vector<int>allprime;
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            allprime.push_back(i);
        }
    }

    int cnt=0;
   
   for(int i=2;i<=n;i++){
        if(prime[i]==false){
            int x=i;
            map<int,int>div; 
            for(int j=0;j<allprime.size();j++){
                while(x%allprime[j] ==0){
                  
                    div[ allprime[j] ]++ ;
                    x=x/allprime[j] ;
                }
            }
          
            if(div.size()==2){
                cnt++;
            }
        }
   }
   cout<<cnt<<endl;
   
    
    return 0;
}