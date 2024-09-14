#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t; 
    while(t--) {
      int n,m,q;
      cin>>n>>m>>q;
     int m1,m2;
     cin>>m1>>m2;
     if(m1>m2) swap(m1,m2);
     int q1;
     cin>>q1;
     if(q1<m1){
         int cnt=0;
         cnt += m1-1;
         cout<<cnt<<"\n";
     }else if(q1>m2){
         int cnt=0;
         cnt += n-m2;
         cout<<cnt<<"\n";
     }else{
         
        cout<<(m2-m1)/2<<"\n";
        
     }
      
      
       
    }
}
