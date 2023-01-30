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
        ll n;
        cin>>n;
        vector<vector<int>>seq(n,vector<int>(n-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>seq[i][j];
            }
        }
        int extra;
        unordered_map<int,int>Ncount;
        for(int j=0;j<n;j++){
                Ncount[seq[j][0]]++;
        }
        for(auto it:Ncount){
            if(it.second==(n-1)){
                    cout<<it.first<<" ";
                }
            else extra = it.first;
        }
        for(int i=1;i<n-1;i++){
            cout<<extra<<" ";
            for(int j=0;j<n;j++){
                if(seq[j][i]!=extra){extra = seq[j][i];break;}
            }
        }cout<<extra<<endl;
    }
    return 0;
}