// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string a,b;
//         cin>>a>>b;
//         string lasta,lastb;
//         // cout<<a[a.size()-2]<<" "<<endl;;
//         if(a.size()>=2){
//             lasta.push_back(a[a.size()-1]);
//             lasta.push_back(a[a.size()-2]);
//         }

//         if(b.size()>=2){
//             lastb.push_back(b[b.size()-1]);
//             lastb.push_back(b[b.size()-2]);
//         }
//         if(!lasta.empty()){ 
//                 reverse(lasta.begin(),lasta.end());
//         }
//         if (!lastb.empty()){
//             reverse(lastb.begin(),lastb.end());
//         }

//         if(!lasta.empty() && !lastb.empty() && lasta==lastb && lasta.back()=='L' && lastb.back()=='L'){
//             int ax = 0;
//             for(int i=0;i<a.size();i++){
//                 if(a[i]=='X'){
//                     ax++;
//                 }
//             }
//             int bx=0;
//             for(int i=0;i<a.size();i++){
//                 if(b[i]=='X'){
//                     bx++;
//                 }
//             }
//             if(ax>bx){
//                 cout<<">"<<endl;
//             }else if(ax==bx){
//                 cout<<"=\n";
//             }else{
//                 cout<<"<\n";
//             }
//         }
//         else if(!lasta.empty() && !lastb.empty() && lasta==lastb && lasta.back()=='S' && lastb.back()=='S'){
//             int ax=0,bx=0;
//             for(int i=0;i<a.size();i++){
//                 if(a[i]=='X'){
//                     ax++;
//                 }
//             }
//             for(int i=0;i<b.size();i++){
//                 if(b[i]=='X'){
//                     bx++;
//                 }
//             }
//             if(ax>bx){
//                 cout<<"<\n";
//             }else if(ax<bx){
//                 cout<<">\n";
//             }else{
//                 cout<<"=\n";
//             }
//         }else if(a.size()==1 &&b.size()==1){
//             if(a.back()=='L' && b.back()=='M'){
//                 cout<<">\n";
//             }else if(a.back()=='L' && b.back()=='S'){
//                 cout<<">\n";
//             }else if(a.back()=='M' && b.back()=='S'){
//                 cout<<">\n";
//             }else if(a.back()=='M' && b.back()=='L'){
//                 cout<<"<\n";
//             }else if(a.back()=='S' && b.back()=='L'){
//                 cout<<"<\n";
//             }else if(a.back()=='S' && b.back()=='M'){
//                 cout<<"<\n";
//             }else if(a.back()==b.back()){
//                 cout<<"=\n";
//             }
//         }else if(!lasta.empty() && !lastb.empty() && lasta==lastb && lasta.back()=='L' && lastb.back()=='S'){
//             cout<<">\n";
//         }
//         else if(!lasta.empty() && !lastb.empty() && lasta==lastb && lasta.back()=='S' && lastb.back()=='L'){
//             cout<<"<\n";
//         // }else if(!lasta.empty() && lastb.empty() && lasta.back()=='L' && lastb.back()=='M'){

//         }

               
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        // string lasta,lastb;
        // lasta.push_back(a[a.size()-1]);
        // lastb.push_back(b[b.size()-1]);
        if(a.back()=='L' && b.back()=='L'){
            int ax=0,bx=0;
            if(a.size()>1 ){
                for(int i=0;i<a.size();i++){
                    if(a[i]=='X')
                        ax++;
                }
            }
            if(b.size()>1 ){
                for(int i=0;i<b.size();i++){
                    if(b[i]=='X')
                        bx++;
                }
            }
            if(ax>bx){
                cout<<">\n";
            }else if(ax<bx){
                cout<<"<\n";
            }else{
                cout<<"=\n";
            }
        }else if(a.back()=='L' && b.back()=='M'){
            cout<<">\n";
        }else if(a.back()=='M' && b.back()=='L'){
            cout<<"<\n";
        }else if(a.back()=='M' && b.back()=='S'){
            cout<<">\n";
        }else if(a.back()=='S' && b.back()=='M'){
            cout<<"<\n";
        }else if(a.back()=='S' && b.back()=='L'){
            cout<<"<\n";
        }else if(a.back()=='L' && b.back()=='S'){
            cout<<">\n";
        }else if(a.back()=='M' && b.back()=='M'){
            cout<<"=\n";
        }else if(a.back()=='S'&& b.back()=='S'){
            int ax =0,bx=0;
            for(int i=0;i<a.size();i++){
                if(a[i]=='X'){
                    ax++;
                }
            }
            for(int i=0;i<b.size();i++){
                if(b[i]=='X'){
                    bx++;
                }
            }

            if(ax>bx){
                cout<<"<\n";
            }else if(ax<bx){
                cout<<">\n";
            }else{
                cout<<"=\n";
            }
        }

    }
    return 0;
}