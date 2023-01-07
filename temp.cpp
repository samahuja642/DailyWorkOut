#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int>count;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        count[temp]++;
    }
    string ans;
    int maxi = INT_MIN;
    for(auto it=count.begin();it!=count.end();it++){
        cout<<it->second<<endl;
        if(it->second>maxi){
            maxi = it->second;
            ans = it->first;
        }
    }
    cout<<ans<<endl;
    return 0;
}