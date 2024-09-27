// CODING:- 
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
vector<int> v(4);
for(int i=0;i<4;i++){
    int x;
    cin>>x;
    v[i]=x;
}
sort(v.begin(),v.end());
a = v[3] - v[0];
b=v[3] - v[1];
c=v[3]-v[2];
cout<<a<<" "<<b<<" "<<c<<"\n";
}