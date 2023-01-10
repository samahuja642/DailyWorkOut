#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>dragons(n);
    for(int i=0;i<n;i++){
        cin>>dragons[i].first>>dragons[i].second;
    }
    sort(dragons.begin(),dragons.end());
    bool ans = true;
    for(int i=0;i<n;i++){
        if(s>dragons[i].first){
            s += dragons[i].second;
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}