#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long int 
#define pr cout<<"\n";
template<typename T> using pbds_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<typename T> using pbds_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
const int N=1005;

vector<int>dx={1,0,0,1,1,-1,-1,-1};
vector<int>dy={0,-1,1,1,-1,-1,0,1};

bool visited[N+1][N+1];
int n;
bool isvalid(int x, int y)
{
    return (x<=n && x>=1 && y<=n && y>=1);
}

void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    visited[x][y]=true;
    q.push({x,y});
    while (!q.empty())
    {
        /* code */
        pair<int,int>p={q.front().first,q.front().second};
        q.pop();
        for(int i=0;i<8;i++){
            int curx = dx[i],cury=dy[i];
            int finalx=p.first+curx;
            int finaly= p.second+cury;
            if( isvalid(finalx,finaly) && visited[finalx][finaly]==false){
                visited[finalx][finaly]=true;
                q.push({finalx,finaly});
            }
        }

    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            visited[i][j]=false;
        }
    }

    int qx,qy,kx,ky,tx,ty;
    cin>>qx>>qy>>kx>>ky>>tx>>ty;
    for(int i=0;i<8;i++){
        int x=dx[i];
        int y=dy[i];
        int finalx=qx+x;
        int finaly=qy+y;

        while(isvalid(finalx ,finaly)==true){
            visited[finalx][finaly] = true;
           
            finalx+=x;
            finaly+=y;
        }
    }
    
    bfs(kx,ky);
    if(visited[tx][ty]==true){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


return 0;
}