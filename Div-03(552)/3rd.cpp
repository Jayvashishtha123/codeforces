// CODING:- 

//THIS IS ..................................... "JAY VARDHAN VASHISHTHA".................................................................
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
//int t;
//while(t--){
int a,b,c;
cin>>a>>b>>c;

int a1 = a/3;
int b1 = b/2;
int c1 = c/2;
int mini = min({a1,b1,c1});
long long ans = 0;
a= a - mini*3;
b= b - mini*2;
c-= mini*2;
vector<int> ai={a,b,c};
vector<int> v={1,2,3,1,3,2,1};


for(int i=0;i<7;i++){
    int day = i;
    vector<int> b=ai;
    int c=0;
    while(b[v[day]-1]>0){
        b[v[day]-1]--;
        day = (day+1)%7;
        c++;
    }
    ans = max(ans,mini*7+c);
    

// if(a!=0 && b!=0 && c!=0){
//     if(a==1){
// ans+=3;
// }else if(a==2){
//      ans += 2;
//     if(b>=2){
//         ans += 2;
//     }else{
//         ans += b;
//     }
//     if(c>=2){
//         ans +=2;
//     }else {
//         ans += c;
//     }
   
// }else{
//     if(b==1 && c==1){
//         ans += 4;
//     }else if(b==0 && c==1){
//         ans += 2;
//     }else if(b==1 && c==0){
//         ans += 2;
//     }else if(b==0 && c==0){
//         ans +=1;
//     }
    
// }
// }else if(a==0 & b!=0 && c!=0){
// ans += 2;
// }

// else if(a!=0 && b==0 && c!=0){
// ans += 1;
// if(c>=2){
//     ans+=2;
// }else{
//     ans+=c;
// }
// }

// else if(a!=0 && b!=0 && c==0){
// // ans += 4;
// if(a>=2){
//     ans+=2;
// }else{
//     ans+=a;
// }
// if(b>=2){
//     ans+=2;
// }else{
//     ans+= b;
// }
// }else if((a==0 && b==0 && c!=0) || (a==0 && b!=0 && c==0) || (a!=0 && b==0 && c==0)){
// ans ++;
// }






}
cout<<ans<<"\n";
//}
} 