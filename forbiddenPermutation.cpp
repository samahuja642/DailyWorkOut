#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        unordered_map<ll,ll>p;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            p[temp] = i;
        }
        // cout<<"----"<<endl;
        // for(auto it:p){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        // cout<<"----"<<endl;
        ll a[m];
        for(ll i=0;i<m;i++){
            cin>>a[i];
        }
        ll minOperations = INT_MAX;
        for(ll i=0;i<m-1;i++){
            if((p[a[i+1]]-p[a[i]]) < 0){
                // cout<<"problem "<<a[i+1]<<" "<<a[i]<<endl;
                // cout<<"block1"<<endl;
                minOperations = 0;
                break;
            }
            else if((p[a[i+1]]-p[a[i]]) > d){
                // cout<<a[i+1]<<" "<<a[i]<<endl;
                // cout<<"block2"<<endl;
                minOperations = 0;
                break;
            }
            else{
                // cout<<p[a[i+1]]<<" "<<p[a[i]]<<endl;
                // cout<<"block3"<<endl;
                minOperations = min(p[a[i+1]] - p[a[i]],minOperations);
                if(p[a[i+1]]-p[a[i]]<=d){
                    ll change = n - 1 - p[a[i+1]];
                    if(change + p[a[i+1]] - p[a[i]] > d){
                        // cout<<"part1"<<endl;
                        minOperations = min(minOperations,d - p[a[i+1]] + p[a[i]] + 1);
                    }
                    else{
                        // cout<<"part2"<<endl;
                        change += (p[a[i]]);
                        if(change+p[a[i+1]]-p[a[i]]>d){
                            minOperations = min(minOperations,d - p[a[i+1]] + p[a[i]] + 1);
                        }
                    }
                }
            }
        }
        cout<<minOperations<<endl;
    }
    return 0;
}