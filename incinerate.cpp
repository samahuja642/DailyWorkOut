#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>hp(n);
        for(int i=0;i<n;i++)cin>>hp[i].first;
        for(int i=0;i<n;i++)cin>>hp[i].second;
        sort(hp.begin(),hp.end());
        vector<int>suf(n);
        suf[n-1] = hp[n-1].second;
        for(int i=n-2;i>=0;i--){
            suf[i] = min(suf[i+1],hp[i].second);
        }
        int tillAlive = 0;
        int delta = 0;
        while(tillAlive<n && k>0){
            delta += k;
            while(tillAlive<n && hp[tillAlive].first<=delta){
                tillAlive++;
            }
            if(tillAlive<n)k -= suf[tillAlive];
        }
        if(tillAlive==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}