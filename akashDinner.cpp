#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<pair<long long,long long>>tc(n);
        for(long long i=0;i<n;i++)cin>>tc[i].second;
        for(long long i=0;i<n;i++)cin>>tc[i].first;
        sort(tc.begin(),tc.end());
        long long totalCost = 0;
        long long numCategory = 0;
        unordered_set<long long>categories;
        for(long long i=0;i<n;i++){
            if(numCategory<k && categories.find(tc[i].second)==categories.end()){
                totalCost += tc[i].first;
                numCategory++;
                categories.insert(tc[i].second);
            }
        }
        if(numCategory<k)cout<<-1<<endl;
        else{
            cout<<totalCost<<endl;
        }
    }
    return 0;
}