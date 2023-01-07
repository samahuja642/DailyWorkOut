#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a,b;
    for(int i=0;i<2*n;i++){
        if(i<n){
            a.push_back(s[i]-'0');
        }
        else{
            b.push_back(s[i]-'0');
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool small = (a[0]<b[0]);
    bool ans = true;
    for(int i=0;i<n;i++){
        if(small == true){
            if(a[i]>=b[i]){
                ans = false;
                break;
            }
        }
        else{
            if(a[i]<=b[i]){
                ans = false;
                break;
            }
        }
    } 
    if(ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}