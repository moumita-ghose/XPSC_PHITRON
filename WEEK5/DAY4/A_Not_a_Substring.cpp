/*
link : https://codeforces.com/problemset/problem/1860/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        // string x = "MOU";
        // cout<<x.find("mita")<<endl;
        
        int l = s.size();
        string a,b;
        int sz = 2*l;
        // string b ;// (sz) ; //," ");
        for(int i=1;i<=l*2;i=i+2){
            a.push_back('(');
            a.push_back(')');

            // b.push_back(')');
            // b.push_back('(');
        }
        for(int i=0;i<l;i++){
            b.push_back('(');
        }
        for(int i=0;i<l;i++){
            b.push_back(')');
        }
        // cout<<b<<endl;

        
        // cout<<a<<" -> "<<b<<endl;
        if(a.find(s)==string::npos){
            cout<<"YES\n"<<a<<endl;
        }else if(b.find(s)==string:: npos){
            cout<<"YES\n"<<b<<endl;
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main() {
//   ios::sync_with_stdio(false); cin.tie(0);
//   int t;
//   cin >> t;
//   while (t--) {
// 	string s;
// 	cin >> s;
// 	int n = s.size();
// 	string a, b;
// 	for (int i = 0; i < 2 * n; ++i) {
// 	  a += "()"[i & 1];
// 	  b += ")("[i < n];
// 	}
//     cout<<a<<" -> "<<b<<endl;
// 	// if (a.find(s) == string::npos) {
// 	//   cout << "YES\n" << a << '\n';
// 	// } else if (b.find(s) == string::npos) {
// 	//   cout << "YES\n" << b << '\n';
// 	// } else {
// 	//   cout << "NO\n";
// 	// }
//   }
// }