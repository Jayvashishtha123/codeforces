#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t; 
    while(t--) {
       int n;
       cin>>n;
       string ans="";
       vector<char> v={'a','e','i','o','u'};
       if(n<=5){ 
           for(int i=0;i<n;i++){
                ans += v[i];
           }
           cout<<ans<<"\n";
       }else{
           int k=n%5;
           int l=n/5;
           string aa="",bb="",cc="",dd="",ee="";
           for(int i=0;i<l;i++){
               aa+='a';
               bb+='e';
               cc+='i';
               dd+='o';
               ee+='u';
           }
           
           for(int j=0;j<k;j++){
               if(j==0){
                   aa+='a';
               }else if(j==1){
                   bb+='e';
               }else if(j==2){
                   cc+='i';
               }else if(j==3){
                   dd+='o';
               }else if(j==4){
                   ee+='u';
               }
           }
           string hehe=aa+bb+cc+dd+ee;
           cout<<hehe<<"\n";
       }
    }
}
