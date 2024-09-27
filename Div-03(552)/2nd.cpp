// CODING:- 
// ..................................... "JAY VARDHAN VASHISHTHA".................................................................

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n < 2) {
        cout << "0\n";
        return 0;
    }

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int> diff;

    int val1 = 0;
    int val2 = 0;

    for(int i = 0; i < n - 1; i++){
        if(v[i] != v[i+1]){
            val1 = v[i];
            val2 = v[i+1];
            diff.push_back(v[i+1] - v[i]);
        }
    }

    if(diff.size() > 2){
        cout << "-1" << "\n";
        return 0;
    }

    if(diff.size() == 2 && diff[0] != diff[1]) {
        cout << "-1" << "\n";
        return 0;
    }

    if(diff.size() == 1){
        if(val1 % 2 == val2 % 2){
            cout << (val1 + val2) / 2 - val1 << "\n";
        } else {
            cout << diff[0] << "\n";
        }
    } 
    else if(diff.size() == 0){
        cout << "0\n";
    }
    else{
        cout << diff[0] << "\n";
    }

    return 0;
}
